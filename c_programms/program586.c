#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertFirst(PPNODE first, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    if (*first == NULL)
    {
        *first = newnode;
    }
    else
    {
        newnode->next = *first;
        *first = newnode;
    }
}
void display(PNODE first)
{
    while (first != NULL)
    {
        printf("|%d|->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;
    insertFirst(&head, 101);
    insertFirst(&head, 11);
    insertFirst(&head, 21);
    insertFirst(&head, 51);

    display(head);
    return 0;
}