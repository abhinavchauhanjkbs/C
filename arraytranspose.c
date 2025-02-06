#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],i,j;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("\nenter any matrix A");
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            B[i][j]=A[j][i];
        }
    }
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        {
            printf("%d\t",B[i][j]);
        }
    }
    return(0);
}