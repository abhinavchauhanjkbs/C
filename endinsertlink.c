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
void insert(int);

int main()
{
    int ele;
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

    printf("\nEnter the element you want to insert at the end: ");
    scanf("%d", &ele);
    insert(ele);

    printf("Display elements:\n");
    display(save);

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

void display(struct node *save)
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

void insert(int ele)
{
    newptr = (struct node*)malloc(sizeof(struct node));
    if (newptr == NULL)
     printf("\nOut of memory\n");
    return;
    

    newptr->info = ele;
    newptr->link = NULL; 
    start = newptr;
    if(start==NULL)
    {
    start= newptr;
}
    else
    {
    save=start;
    while(save->link!=NULL)
{
    save=save->link;
}
save->link=newptr;
newptr->link=save;
}
}