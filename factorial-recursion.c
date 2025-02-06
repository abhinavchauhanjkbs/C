#include<stdio.h>
int main()
{
    int f,n;
    int factorial (int);
    printf("enter any no.");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial=%d",f);

}
int factorial (int n)
{
    int f=1;
    if(n==0)
    return(f);
    else
    return(n*factorial(n-1));
    }