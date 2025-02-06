#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            printf("\nenter value of A");
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            printf("\nenter value of B");
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0 ; i<=2 ; i++)
    {
        printf("\n");
        for(j=0 ; j<=2 ; j++)
        {
            printf("%d\t",C[i][j]);
        
        }
            }
            return(0);
    
}