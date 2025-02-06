#include<stdio.h>
int main()
{
    int a=10, *b;
    b=&a;
    printf("\n%d",b); //address of a
    printf("\n%d",*b); // value of a
    return(0);
}