                                        printf("\n Queue is full");
                                }
                                else{
                                        printf("Enter number %d:",j++);
                                        scanf("%d", &queue[rear++]);
                                }
                                break;
                        case 2:
                                if(front == rear)
                                {
                                        printf("\n Queue is empty");
                                }
                                else {
                                        printf("\n Deleted elements is %d", queue[front++]);
                                        x++;

                                }
                                break;
                        case 3:
                                printf("\n Queue elements are:\n");
                                if(front==rear){
                                        printf("\n Queue is empty");
                                }
                                        else{
                                                for(i=front;i<rear;i++)
                                                {
                                                        printf("%d", queue[i]);
                                                        printf("\n");
                                                }
                                                break;
                                                case 4:
                                                exit(0);
                                                default:
                                                print("Wrong choice: Please see the options");
                                        }
                                }

