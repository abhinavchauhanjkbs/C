#include<stdio.h>
int main()
{
    float temp[15], avg;
    int tt, i;
    for(i=0 ; i<15 ; i++)
    {
        printf("insert temperature");
        scanf("%f",&temp[i]);
    }
tt=0;
for(i=0 ; i<15 ; i++)
{
tt=tt+temp[i];
}
avg= tt/15.0;
printf("avg=%f",avg);
return(0);

}