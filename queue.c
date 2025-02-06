#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
int front, rear;
int main()
{
int queue[SIZE],opt,ele;
void insert(int[],int);
int delete(int[]);
void display(int[]);
front=-1,rear=-1;
printf("\nenter main menu\n");
printf("\n1.INSERT\n2.DELETE\n3.DISPLAy\n4.EXIT");
while(1)
{
printf("\n\nChoose an option: ");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter any element: ");
scanf("%d",&ele);
insert(queue,ele);
break;
case 2:ele=delete(queue);
printf("the deleted element is %d",ele);
break;
case 3:display(queue);
break;
case 4:exit(0);
break;
default:printf("\nkindly choose a valid option(1/2/3/4/)");
break;
}
}
}
void insert(int queue[],int ele)
{
if(rear==SIZE-1)
printf("\nqueue is overflowed");
else if(rear==-1)
{
    rear=0,front=0;
    queue[rear]=ele;
}
else
{
rear++;
queue[rear]=ele;
}
}
int delete(int queue[])
{
int ele;
if(front==-1)
{
printf("\nqueue is underflowed");
return(0);
}
else 
if (front==rear)
{
 ele=queue[front];
 front =-1, rear=-1;
return(ele);
}
else
{
    ele=queue[front];
    front++;
}
return(ele);
}
void display(int queue[])
{
int i;
printf("The elements in queue:\t");
for(i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
}



