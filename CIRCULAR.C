#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


void insert(struct Node** head, int data) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

   
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else { 
        struct Node* last = *head;
        while (last->next != *head) {
            last = last->next;
        }

        
        last->next = newNode;
        newNode->next = *head;
    }
}


void traverse(struct Node* head) {
    
    if (head == NULL) {
        printf("Circular linked list is empty.\n");
        return;
    }

    struct Node* current = head;

   
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);

    printf("\n");
}

int main() {
    struct Node* head = NULL; 
    int n, data;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);


    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        insert(&head, data);
    }

    
    printf("Elements in the circular linked list: ");
    traverse(head);

    return 0;
}
