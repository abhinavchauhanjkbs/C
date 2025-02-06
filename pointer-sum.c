#include<stdio.h>
int main()
{
    int a,b,sum,*x,*y;
    printf("enter any two no");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    sum=*x+ *y;
    printf("sum=%d",sum);
    return(0);

