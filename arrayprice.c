#include<stdio.h>
int main()
{
    int price[10], i, m=0;
    for(i=0 ; i<10 ; i++)
    {
        printf("enter a price");
        scanf("%d",&price[i]);
    }
    for(i=0 ; i<10 ; i++)
    {
        if(price[i]>m)
        m=price[i];   
    }
    printf("maximum price=%d",m);
    return(0);

}