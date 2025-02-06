#include<stdio.h>
int main()
{
int ar[100],i,n,ele,pos;
int LS (int[],int,int);
printf("Enter size of an array\n");
scanf("%d",&n);
printf("\nEnter elements for an array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&ar[i]);
}
printf("\nEnter the element you want to search\n");
scanf("%d",&ele);
pos=LS (ar,n,ele);
if(pos>0)
printf("\nElement found at position %d",pos);
else
printf("\nElement not found");
}
int LS (int ar[],int n, int ele)
{
int i,pos=0;
for(i=0;i<=n-1;i++)
{
if(ar[i]==ele)
{
pos=i+1;
break;
}
}
return (pos);
}