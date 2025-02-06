#include<stdio.h>
int factorial(int n) // function definiton 
{
int f;
f=1;
while(n>=1)
{
    f=f*n;
    n=n-1;
}
    return (f);
}
int main()
{ 
int f,n;
printf("enter any no.");
scanf("%d",&n);
{
f= factorial(n); // function calling   
}
printf("factorial=%d",f);
}
