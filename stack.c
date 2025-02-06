#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
int top;
int main()
{
int stack[SIZE],opt,ele;
int push(int[],int);
int pop(int[]);
int display(int[]);
top=-1;
printf("\nEnter main menu\n");
printf("\n1.PUSH\n2.POP\n3.DISPLAy\n4.EXIT");
while(1)
{
printf("\n\nChoose any option: ");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter element: ");
scanf("%d",&ele);
push(stack,ele);
break;
case 2:ele=pop(stack);
break;
case 3:display(stack);
break;
case 4:exit(0);
break;
default:printf("\nPlease choose a valid option(1/2/3/4/)");
break;
}
}
}
int push(int stack[],int ele)
{
if(top==SIZE-1)
printf("\nStack is overflow");
else
{
top++;
stack[top]=ele;
}
}
int pop(int stack[])
{
int ele;
if(top==-1)
{
printf("\nStack is underflow");
return(0);
}
else
{
ele=stack[top];
printf("The popped element is %d",ele);
top--;
return(ele);
}
}
int display(int stack[])
{
int i;
printf("The elements in stack:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
return(0);
}

