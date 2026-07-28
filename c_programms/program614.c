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
        PNODE temp = NULL;
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
        first = first->next;
        iCount++;
    }
    return iCount;
}

void insertAtPos(PPNODE first, int no, int pos)
{
    int iRet = count(*first);
    if ((pos < 1) || (pos > iRet+1))
    {
        printf("invalid position...!\n");
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
        int iCnt = 0;
        PNODE temp = NULL;
        newnode = (PNODE)malloc(sizeof(NODE));
        newnode->data = no;
        newnode->next = NULL;
        newnode->prev = NULL;
        temp = *first;
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

void deleteFirst(PPNODE first)
{
    if (*first == NULL)
    {
        return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*first)->prev);
        (*first)->prev = NULL;
    }
}

void deleteLast(PPNODE first)
{
    PNODE temp = NULL;
    if (*first == NULL)
    {
        return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void deleteAtPos(PPNODE first, int pos)
{
    int iRet = count(*first);
    if ((pos < 1) || (pos > iRet))
    {
        printf("invalid position...!\n");
        return;
    }
    else if (pos == 1)
    {
        deleteFirst(first);
    }
    else if (pos == iRet)
    {
        deleteLast(first);
    }
    else
    {
        int iCnt = 0;
        PNODE temp = NULL;
        temp = *first;
        for (iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

void display(PNODE first)
{
    while (first != NULL)
    {
        printf("|%d|<->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{

    PNODE head = NULL;

    insertFirst(&head, 11);
    insertFirst(&head, 21);
    insertFirst(&head, 31);
    display(head);

    insertLast(&head, 41);
    insertLast(&head, 51);
    insertLast(&head, 61);
    display(head);

    insertAtPos(&head, 71, 3);
    insertAtPos(&head, 81, 4);
    insertAtPos(&head, 91, 5);
    display(head);

    deleteFirst(&head);
    display(head);

    deleteLast(&head);
    display(head);

    deleteAtPos(&head, 3);
    display(head);

    return 0;
}