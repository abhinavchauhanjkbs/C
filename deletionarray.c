#include<stdio.h>
int main()
{
int ar[100],i,n,ele,pos;
void deletion (int[],int,int,int);
printf("Enter size of an array\n");
scanf("%d",&n);
printf("\nEnter elements for an array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&ar[i]);
}
printf("\nEnter the postion of the element which you want to delete\n");
scanf("%d",&pos);
deletion (ar,n,ele,pos);
n=n-1;
printf("\nElements after deletion\n");
for(i=0;i<=n-1;i++)
{
printf("%d\t",ar[i]);
}
}
void deletion (int ar[],int n, int ele,int pos)
{
int i;
for(i=pos-1;i<=n-1;i++)
{
ar[i]=ar[i+1];
}
ar[i]=ele;
}