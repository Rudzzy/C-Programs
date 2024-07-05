#include <stdio.h>
#include <stdlib.h>

struct Node{
    int var;
    struct Node*  next;
};

void Printlist(struct Node* head) {
    if (head == NULL) {
        printf("\nList is Empty");
        return;
    }

    struct Node* cur = head;

    while(cur != NULL) {
        printf("%d-> ",cur->var);
        cur = cur->next;
    }   printf("NULL");
}

void InsertAtBeginning(struct Node** head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = NULL; ptr->var = data;
    
    ptr->next = *head;
    *head = ptr;
}

void InsertAtEnd(struct Node** head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = NULL; ptr->var = data;

    if(*head == NULL) {
        *head = ptr;
        return;
    }
    struct Node* cur = *head;

    while(cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = ptr;
}

void InsertAtPosition(struct Node** head,int data, int k) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->var = data; ptr->next = NULL;

    struct Node* cur = *head;
    struct Node* prev = NULL;
    int i = 0;

    while (i<k) {
        if(cur->next == NULL) {
            cur->next = ptr;
            return;
        }
        prev = cur;
        cur = cur->next;
        i++;
        if(i==k) {
            prev->next = ptr;
            ptr->next = cur;
            return;
        }
    }
    
}

void DeleteAtBeginning(struct Node** head) {
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void DeleteAtEnd(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* cur = *head;
    while(cur->next != NULL) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = NULL;
    free(cur);
}

int main() {

    struct Node* head1 = NULL;   
    InsertAtEnd(&head1, 4);
    InsertAtBeginning(&head1, 3);
    InsertAtBeginning(&head1, 2);
    InsertAtBeginning(&head1, 1);
    InsertAtPosition(&head1,5,1);
    DeleteAtBeginning(&head1);
    DeleteAtEnd(&head1);
    Printlist(head1);
    return 0;
}