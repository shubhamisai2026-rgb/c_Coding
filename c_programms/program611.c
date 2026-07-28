#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
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
    newnode->prev = NULL;
    if (*first == NULL)
    {
        *first = newnode;
    }
    else
    {
        newnode->next = *first;
        (*first)->prev = newnode;
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
    newnode->prev = NULL;
    if (*first == NULL)
    {
        *first = newnode;
    }
    else
    {
        temp = *first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        temp->next = newnode;
    }
}

int count(PNODE first)
{
    int iCount = 0;
    while (first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void insertAtPos(PPNODE first, int no, int pos)
{
    int iRet = count(*first);
    if ((pos < 1) || (pos > iRet + 1))
    {
        printf("invalid position....\n");
        return;
    }
    else if (pos == 1)
    {
        insertFirst(first, no);
    }
    else if (pos == iRet + 1)
    {
        insertLast(first, no);
    }
    else
    {
        PNODE newnode = NULL;
        PNODE temp = NULL;
        newnode = (PNODE)malloc(sizeof(NODE));
        newnode->data = no;
        newnode->next = NULL;
        newnode->prev = NULL;
        temp = *first;
        int iCnt = 0;
        for (iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next->prev = newnode;
        newnode->prev = temp;
        temp->next = newnode;
    }
}

void display(PNODE first)
{
    while(first!=NULL)
    {
       printf("|%d|<->",first->data);
       first=first->next;    
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;

    insertFirst(&head,11);
    insertFirst(&head,21);
    insertFirst(&head,31);
    display(head);

    insertLast(&head,41);
    insertLast(&head,51);
    insertLast(&head,61);
    display(head);

    insertAtPos(&head,71,3);
    insertAtPos(&head,81,5);
    insertAtPos(&head,91,1);
    insertAtPos(&head,101,10);
    display(head);

    return 0;
}