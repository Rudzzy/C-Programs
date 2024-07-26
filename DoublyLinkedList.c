#include <stdio.h>
#include <stdlib.h>

struct Node{
    int var;
    struct Node* left;
    struct Node* right;
};

void PrintList(struct Node* head) {
    struct Node* cur = head;
    
    while(cur != NULL) {
        printf("%d ",cur->var);
        cur = cur->right;
    }
}

void InsertAtBeginning(struct Node** head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->var = data; ptr->right = NULL; ptr->left = NULL;

    if(*head==NULL) {
        *head = ptr;
        return; 
    }
    (*head)->left = ptr;
    ptr->right = *head;
    *head = ptr;
}

void InsertAtEnd(struct Node** head,int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->var = data; ptr->right = NULL; ptr->left = NULL;

    if(*head == NULL) {
        *head = ptr;
        return;
    }

    struct Node* cur = *head; 

    while(cur->right!=NULL) {
        cur = cur->right;
    }
    cur->right = ptr;
    ptr->left = cur;
}

void InsertAtPosition(struct Node** head,int data,int k)

{
    if(k < 0 ) {
        printf("\nInvalid Position\n");
        return;
    }
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->var = data; ptr->right = NULL; ptr->left = NULL;

    if(*head == NULL)
    {
        *head = ptr;
        return;
    }

    struct Node* cur = *head;
    int i = 0;
    
    while (i < k - 1 && cur->right != NULL) {
        cur = cur->right;
        i++;
    }

    if (i != k - 1) {
        printf("\nInvalid Position\n");
        free(ptr);
        return;
    }

    if (cur->right == NULL) {
        cur->right = ptr;
        ptr->left = cur;
    } else {
        ptr->right = cur->right;
        ptr->left = cur;
        
        if (cur->right != NULL) {
            cur->right->left = ptr;
        }
        cur->right = ptr;
    }
    return;
}

int main() {

    struct Node* head1 = NULL;
    InsertAtBeginning(&head1, 1);
    InsertAtBeginning(&head1, 2);
    InsertAtBeginning(&head1, 3);
    InsertAtEnd(&head1, 0);
    InsertAtPosition(&head1, 4, 2);
    PrintList(head1);
    return 0;
}