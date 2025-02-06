#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,e;
    int result(int,int);
    printf("enter the base\n");
    scanf("%d",&a);
    printf("enter the exponent\n");
    scanf("%d",&b);
    e=result(a,b);
    printf("result=%d",e);
    return(0);
}
int result (int a, int b)
{
    int e;
    e=pow(a,b);
    return (e);
       
    }

    
