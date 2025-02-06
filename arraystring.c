#include<stdio.h>
int main()
{
    char three_planets[ ][8]={"Saturn","Mercury","Venus"};
    int i;
    for(i=0; i<=2; i++)
    {
        printf("%s\n",three_planets[i]);
    }
}