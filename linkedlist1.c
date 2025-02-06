#include<stdio.h>
#include <stdlib.h>
struct node
{
    int info; 
    struct node*link;    
} *start,*newptr,*save;
int main()
{

    int ele, ans;
    void create(int);
    void display(struct node*);
    start=NULL;
    while(1)
    {
    printf("\n enter element");
    scanf("%d",&ele);
    }
    create(ele);
    printf("\n want to continue(Y/N)");
    scanf("%c",&ans);
    fflush(stdin);
    if(ans=='Y'||ans=='y')
    continue;
    else
    break();
    printf("\n display element");
    display(start);
}
void create(int ele)
{
    newptr=(struct node*)malloc(size of(struct node));
    if(newptr==NULL)
    {
   printf("\n out of the memory");
    return();
}
newptr-> info=ele;
newptr->link=NULL;
if(START==NULL)
start=newptr;
else
save=start;
while(save->link!=NULL)
{
    save=save->link;
}
save->link=newptr;
}
void display(struct node*start)
{
    if(start==NULL)
    printf("Linked list is empty");
    else
    save=start;
while(save->link=NULL)
{
    printf("%d",save->info);
}
save=save->link;
}