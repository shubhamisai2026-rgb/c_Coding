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

void insertLast(PPNODE first, int no)
{
    PNODE newnode = NULL;
    PNODE temp = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    if (*first == NULL)
    {
        *first = newnode;
    }
    else
    {

    temp = *first;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next= newnode;
}
}

void display(PNODE first)
{
    while (first)
    {
        printf("|%d|->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int count(PNODE first)
{
    int iCount = 0;
    while (first)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;

    insertFirst(&head, 101);
    insertFirst(&head, 11);
    insertFirst(&head, 21);
    insertFirst(&head, 51);

    insertLast(&head, 102);
    insertLast(&head, 12);
    insertLast(&head, 22);
    insertLast(&head, 52);

    display(head);

    int iRet = 0;

    iRet = count(head);

    printf("total nodes are:%d", iRet);
}