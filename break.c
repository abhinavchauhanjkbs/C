#include<stdio.h>
int main()
{
    int n;
    for(n=1;n<=10;n++)
    {
        if(n>4)
        break;
        printf("%d/t",n);
    }
    return 0;
}