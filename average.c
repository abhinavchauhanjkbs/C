#include<stdio.h>
int main()
{
    int x,y,z;
    float avg;
    printf("enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    avg=(x+y+z)/3.0;
    printf("average=%f",avg);
    return 0;
}