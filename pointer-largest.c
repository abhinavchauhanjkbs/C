#include<stdio.h>
int largest(int *x,int *y,int *z)
{
    if(x>*y&&y>*z)
        printf("a is the largest=%d");
        else 
        if(y>*x&&y>*z)
        printf("b is the largest");
        else
        printf("c is the largest");
        return (0);
    }
    
        int main()
{
    int a,b,c,*x,*y,*z,L;
    printf("enter any three no");
    scanf("%d%d%d",&a,&b,&c);
    x=&a;
    y=&b;
    z=&c;
L = int largest(a,b,c);
    return 0;
    }
