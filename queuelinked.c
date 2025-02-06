#include <stdio.h>
#include <stdlib.h>

struct node 
{
int info;
struct node* link;
} * front, * rear;

struct node* newptr, * save;

int main() {
int opt, ele;
void insert(int);
int delete();
void display(struct node*);
front = rear = NULL;

printf("\nenter main menu\n");
printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");

while (1) 
{
printf("\n\nChoose an option: ");
scanf("%d", &opt);

switch (opt)
{
case 1:
printf("Enter any element: ");
scanf("%d", &ele);
insert(ele);
break;
case 2:
ele = delete();
{
printf("Deleted element is %d", ele);
}
break;
case 3:
display(front);
break;
case 4:
exit(0);
break;
default:
printf("\nKindly choose a valid option (1/2/3/4/)");
break;
}
}
}
void insert(int ele) 
{
newptr = (struct node*)malloc(sizeof(struct node));
newptr->info = ele;
newptr->link = NULL;
if (front == NULL) 
{
front = rear = newptr;
} else 
{
rear->link = newptr;
rear = newptr;
}
}
int delete() 
{
int ele;
if (front == NULL) 
{
printf("\nQueue is empty");
return 0;
} 
else 
{
ele = front->info;
save = front;
front = front->link;
free(save);
return ele;
}
}
void display(struct node* front) 
{
save = front;
while (save != NULL) {
printf("%d  ", save->info);
save = save->link;
}
}
