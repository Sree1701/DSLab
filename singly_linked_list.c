#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
struct Node * createNode(int data){
	struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));
	if(!newNode){
		printf("Memory allocation failed\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
void insertAtBeginning(struct Node ** head, int data){
	struct Node*newNode = createNode(data);
	newNode->next =* head;
	*head = newNode;
}
void insertAtEnd(struct Node**head,int data){
	struct Node * newNode = createNode(data);
	if(*head == NULL){
		*head=newNode;
		return;
	}
	struct Node*temp=*head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}
void deleteNode(struct Node ** head,int key){
	struct Node*temp=*head;
	struct Node*prev = NULL;
	if(temp!=NULL && temp->data==key){
		*head=temp->next;
		free(temp);
		printf("Node %d deleted.\n",key);
		return;
	}
	while(temp!= NULL && temp->data!=key){
		prev = temp;
		temp= temp->next;
	}
	if(temp == NULL){
		printf("Node %d not found.\n",key);
		return;
	}
	prev->next = temp->next;
	free(temp);
	printf("Node %d deleted.\n",key);
}
void printList(struct Node*head){
	if(head == NULL){
		printf("List is empty.\n");
		return;
	}
	struct Node*temp=head;
	while(temp != NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int main(){
	struct Node*head =NULL;
	int choice,value;
	printf("\n---Singly Linked List Menu---\n");
                printf("1.Insert at Beginning\n");
                printf("2.Insert at End\n");
                printf("3.Delete a Node\n");
                printf("4.Display List\n");
                printf("5.Exit\n");
	while(1){
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter value:");
				scanf("%d",&value);
				insertAtBeginning(&head,value);
				break;
			case 2:
				printf("Enter value:");
				scanf("%d",&value);
				insertAtEnd(&head,value);
				break;
			case 3:
                                printf("Enter value to delete:");
                                scanf("%d",&value);
                                deleteNode(&head,value);
                                break;
			case 4:
				printList(head);
				break;
			case 5:
				printf("Exiting... \n");
				exit(0);
			default:
				printf("Invalid choice!Try again.\n");
		}
	}
	return 0;
}
