#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
int top;
int main()
{
int stack[SIZE],opt,ele;
void push(int[],int);
int pop(int[]);
void display(int[]);
top=-1;
printf("\nenter main menu\n");
printf("\n1.PUSH\n2.POP\n3.DISPLAy\n4.EXIT");
while(1)
{
printf("\n\nChoose an option: ");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter any element: ");
scanf("%d",&ele);
push(stack,ele);
break;
case 2:ele=pop(stack);
break;
case 3:display(stack);
break;
case 4:exit(0);
break;
default:printf("\nkindly choose a valid option(1/2/3/4/)");
break;
}
}
}
void push(int stack[],int ele)
{
if(top==SIZE-1)
printf("\nStack is overflowed");
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
printf("\nStack is underflowed");
return(0);
}
else
{
ele=stack[top];
printf("The popped element is %d",ele);
top--;
free(save);
return(ele);
}
}
void display(int stack[])
{
int i;
printf("The elements in stack:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}



