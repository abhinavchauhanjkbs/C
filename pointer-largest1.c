#include<stdio.h>
int largest(int a, int b,int c) // function definiton 
{
    if(a>b&&a>c)
    printf("a is the largest");
    else
    printf("b is the largest");
    return(0);
}
int main ()
{
int a,b,L;
printf("enter any two no.");
scanf("%d%d",&a,&b);
L=largest(a,b);
printf("largest=%d",L);

}