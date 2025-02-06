#include<stdio.h>
int main()
{
    int sal[10],ts,i;
    float avg;
    for(i=0 ; i<=9 ; i++)
    {
        printf("insert salary");
        scanf("%d",&sal[i]);
    }
    ts=0;
    for(i=0 ; i<=9 ; i++)
    {
    ts= ts+sal[i];
    }
    avg=ts/10.0;
    printf("total salary=%d",ts);
    printf("avg salary=%f",avg);
    return(0);

}