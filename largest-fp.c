#include<stdio.h>
int main()
{
int a,b,c;
int *p,*q,*r;
int highest (int,int,int);
printf("Enter any three numbers\n");
scanf("%d%d%d",&a,&b,&c);
highest(a,b,c);
}
int highest (int a,int b,int c)
{
int *p,*q,*r;
p=&a;
q=&b;
r=&c;
if((*p)>(*q)&&(*p)>(*r))
{
printf("%d is the highest value",*p);
}
else
if((*q)>(*p)&&(*q)>(*r))
{
printf("%d is the highest value",*q);
}
else
{
printf("%d is the highest valu",*r);
}
return (0);
}