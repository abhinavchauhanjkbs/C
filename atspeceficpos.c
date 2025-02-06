#include <stdlib.h>
#include <stdio.h>

struct node
{
int info;
struct node* link;
};
struct node *start, *newptr, *save;
void create(int);
void display(struct node*);
void insert(int,int);

int main()
{
int ele,n;
char ans;
start = NULL;

while (1)
{
printf("\nEnter element: ");
scanf("%d", &ele);
create(ele);

printf("Want to insert another element (Y/N)? ");
scanf(" %c", &ans);

if (ans == 'Y' || ans == 'y')
continue;
else
break;
}
printf("\nEnter where you want to insert the element");
scanf("%d",&n);

printf("\nEnter the element you want to insert");
scanf("%d", &ele);
insert(ele,n);

printf("Display elements\n");
display(start);

return 0;
}

void create(int ele)
{
newptr = (struct node*)malloc(sizeof(struct node));
if (newptr == NULL)
{
printf("\nOut of memory\n");
return;
}
newptr->info = ele;
newptr->link = NULL;
if (start == NULL)
{
start = newptr;
}
else
{
save = start;
while (save->link != NULL)
{
save = save->link;
}
save->link = newptr;
}
}

void display(struct node *start)
{
save = start;
if (save == NULL)
{
printf("Linked list is empty\n");
return;
}
while (save != NULL)
{
printf("%d ", save->info);
save = save->link;
}
}
void insert(int ele,int n)
{
newptr = (struct node*)malloc(sizeof(struct node));
if (newptr == NULL)
{
printf("\nOut of memory\n");
return;
}
newptr->info = ele;
newptr->link = NULL;
save = start;
while (save->info != ele && save!=NULL)
{
save = save->link;
}
if(save==NULL)
printf("\nElement not found ");
else
newptr->link=save->link;
save->link=newptr;
}
