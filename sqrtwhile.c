#include<stdio.h>
#include<math.h>
int main()
{
    float s;
    int n;
    n=1;
    while(n<=9)
    {
        s=sqrt(n);
        printf("\nsqrt=%f",s);
        n=n+2;
    }
}