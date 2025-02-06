#include<stdio.h>
int main()
{
    int num[5], L1,L2,i;
    L1=0;
    L2=0;
    for(i=0 ; i<5 ; i++)
    {
        printf("enter any no.");
        scanf("%d",&num[i]);
    } 
    for(i=0 ; i<5 ; i++)
    {
    if(num[i]>L1)
    L1=num[i];
}
printf("First largest=%d",L1);
for(i=0 ; i<5 ; i++)
{
    if(num[i]>L2&&num[i]<L1)
    L2=num[i];
}
printf("Second largest=%d",L2);
return(0);
}