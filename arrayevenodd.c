#include<stdio.h>
int main()
{
    int num[5], i, Se, So;
    for(i=0 ; i<5 ; i++)
    {
        printf("enter any number");
        scanf("%d",&num[i]);
    } 
    Se=0;
    So=0;
    for(i=0 ; i<5 ; i++)
    {
        if(num[i]%2==0)
        Se= Se+num[i];
        else
        So= So+num[i];
    }
    printf("\nSum of even numbers=%d",Se);
    printf("\nSum of odd numbers=%d",So);
    return(0);
}