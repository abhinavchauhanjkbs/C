#include<stdio.h>
int main()
{
int ar[100],i,n,ele,pos;
void insertion (int[],int,int,int);
printf("Enter size of an array\n");
scanf("%d",&n);
printf("\nEnter elements for an array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&ar[i]);
}
printf("\nEnter the element you want to insert\n");
scanf("%d",&ele);
printf("\nEnter the postion of the inserting element\n");
scanf("%d",&pos);
insertion (ar,n,ele,pos);
n=n+1;
printf("\nElements after insertion\n");
for(i=0;i<=n-1;i++)
{
printf("%d\t",ar[i]);
}
}
void insertion (int ar[],int n, int ele,int pos)
{
int i;
for(i=n;i>=pos;i--)
{
ar[i]=ar[i-1];
}
ar[i]=ele;
}