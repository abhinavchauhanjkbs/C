#include<stdio.h>
#include<math.h>
int result (int a, int b) // function definition
{
    int e=1;
    {
        while(b>0)
        {
            e=e*a;
            b--;
            return(e);
        }
    }      
    }
int main()
{
    int a,b,e;
    printf("enter the base\n");
    scanf("%d",&a);
    printf("enter the exponent\n");
    scanf("%d",&b);
    e=result(a,b); // function calling
    printf("result=%d",e);
}


    
