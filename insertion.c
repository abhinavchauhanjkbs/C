#include<stdio.h>
int main()
{
int ar[100],i,n,ele,pos;
int insertion (int[],int,int);
printf("Enter size of an array\n");
scanf("%d",&n);
printf("\nEnter elements for an array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&ar[i]);
}
printf("\nEnter the position you want to insert the element at\n");
scanf("%d",&pos);
printf("\nEnter the element you want to insert\n");
scanf("%d",&ele);
for(i=0;i<=n-1;i++)
pos=insertion(ar,n,ele);
}

    int insertion(int ar[],int ele,int n, int pos)
int i;
for(i=n ; i>=pos; i--)
{
    ar[i]=a[i-1];
}

    ar[i]=ele;





