#include<stdio.h>
float average(int x, int y, int z)    // funtion definition 
{
    float avg;
avg=(x+y+z)/3.0;
return(avg);
}
int main()
{
    int x,y,z;
    float avg;
    printf("enter any three no.");
    scanf("%d%d%d",&x,&y,&z);
    avg= average(x,y,z);        // function calling                                           
    printf("average=%f",avg); 

}