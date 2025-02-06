#include<stdio.h>
int main()
{
    int a=10, *b,**c;
    b=&a;
    c=&b;
    printf("\n%u",c); // adress of b
    printf("\n%u",*c); // address of a
    printf("\n%d",**c); // address of a
    return 0;
}