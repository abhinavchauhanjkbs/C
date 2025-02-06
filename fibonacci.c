#include<stdio.h>
int fib (int i)
    {
        if(i==0||i==1)
         return(i);
        else
         return(fib(i-1)+fib(i-2));
    }
int main()
{
    int f,n,i;
    printf("enter no. of terms you want to display");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        f=fib(i);
        printf("fibonacci=%d",f);
    }
        return 0;
    

}