#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *left, *right;
};

void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
struct node *insert(struct node *, int);
struct node *search(struct node *, int);

struct node *btree;

int main() {
    int ele, opt;
    char ans;

    btree = NULL;

    while (1) {
        printf("\nMain Menu");
        printf("\n1. Create\n2. Inorder\n3. Preorder\n4. Postorder\n5. Search\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                while (1) {
                    printf("\nEnter Element: ");
                    scanf("%d", &ele);
                    btree = insert(btree, ele);
                    printf("\nWant to continue (Y/N): ");
                    scanf(" %c", &ans);

                    if (ans == 'Y' || ans == 'y')
                        continue;
                    else
                        break;
                }
                break;
            case 2:
                printf("\nInorder traversal: ");
                inorder(btree);
                printf("\n");
                break;
            case 3:
                printf("\nPreorder traversal: ");
                preorder(btree);
                printf("\n");
                break;
            case 4:
                printf("\nPostorder traversal: ");
                postorder(btree);
                printf("\n");
                break;
            case 5:
                printf("\nEnter element to search: ");
                scanf("%d", &ele);
                if (search(btree, ele) != NULL) {
                    printf("\nElement found\n");
                } else {
                    printf("\nElement not found\n");
                }
                break;
            case 6:
                exit(0);
            default:
                printf("\nWrong choice");
        }
    }
}

struct node *insert(struct node *btree, int ele) {
    if (btree == NULL) {
        btree = (struct node *)malloc(sizeof(struct node));
        btree->info = ele;
        btree->left = NULL;
        btree->right = NULL;
    } else if (ele < btree->info) {
        btree->left = insert(btree->left, ele);
    } else if (ele > btree->info) {
        btree->right = insert(btree->right, ele);
    } else {
        printf("\nDuplicate node");
    }

    return btree;
}

void inorder(struct node *btree) {
    if (btree != NULL) {
        inorder(btree->left);
        printf("\t%d", btree->info);
        inorder(btree->right);
    }
}

void preorder(struct node *btree) {
    if (btree != NULL) {
        printf("\t%d", btree->info);
        preorder(btree->left);
        if (btree->left != NULL || btree->right != NULL) {
            preorder(btree->right);
        }
    }
}

void postorder(struct node *btree) {
    if (btree != NULL) {
        postorder(btree->left);
        postorder(btree->right);
        printf("\t%d", btree->info);
    }
}

struct node *search(struct node *btree, int ele) {
    if (btree == NULL || btree->info == ele) {
        return btree;
    }

    if (ele < btree->info) {
        return search(btree->left, ele);
    } else {
        return search(btree->right, ele);
    }
}
