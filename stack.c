#include <stdio.h>
int main(){
int size,choice,value,top=-1;
printf("Enter the size of the stack:");
scanf("%d",&size);
int stack[size];
while(1){
printf("\n1.Push \n2.Pop \n3.Display \n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
if(top==size-1){
printf("Stack Overflow!\n");
}
else 
{
printf("Enter value to Push:");
scanf("%d",& value);
stack[++top]=value;
printf("%d Pushed to Stack.\n", value);
}
break;
case 2:
if (top== -1){
printf("Stack Unerflow!\n");
}
else
{
printf("Popped: %d\n", stack[top--]);
}
break;
case 3:
if (top==-1){
printf("Elements in the stack:");
}
else
{
printf("Stack Elements:");
for(int i=top; i>=0; i--)
printf("%d ", stack[i]);
printf(" \n");
}
break;
case 4:
printf("Exiting...\n");
return 0;
default:
printf("Invalid choice!\n");
}
}
return 0;
}

