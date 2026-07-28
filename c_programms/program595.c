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
    PNODE temp = NULL;
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
        temp = *first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
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
    int iCount = count(*first);
    if ((pos < 1) || (pos > iCount + 1))
    {
        printf("invalid position...\n");
        return;
    }
    else if (pos == 1)
    {
        insertFirst(first, no);
    }
    else if (pos == iCount + 1)
    {
        insertLast(first, no);
    }
    else
    {
        PNODE temp = NULL;
        PNODE newnode = NULL;
        newnode = (PNODE)malloc(sizeof(NODE));
        newnode->data = no;
        newnode->next = NULL;
        temp = *first;
        int iCnt = 0;
        for (iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
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
        PNODE temp;
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}

void deleteLast(PPNODE first)
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
        PNODE temp;
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

    int iCount = count(*first);
    if ((pos < 1) || (pos > iCount))
    {
        printf("invalid position...\n");
        return;
    }
    else if (pos == 1)
    {
        deleteFirst(first);
    }
    else if (pos == iCount)
    {
        deleteLast(first);
    }
    else
    {
        PNODE temp = NULL;
        PNODE target = NULL;
        temp = *first;
        int iCnt = 0;
        for (iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        free(target);
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
    int iRet = 0;

    insertFirst(&head, 11);
    insertFirst(&head, 21);
    insertFirst(&head, 31);
    insertFirst(&head, 41);

    display(head);
    iRet = count(head);
    printf("total nodes are:%d\n", iRet);

    insertLast(&head, 51);
    insertLast(&head, 61);
    insertLast(&head, 71);
    insertLast(&head, 81);

    display(head);
    iRet = count(head);
    printf("total nodes are:%d\n", iRet);

    insertAtPos(&head, 91, 3);
    display(head);
    iRet = count(head);
    printf("total nodes are:%d\n", iRet);

    deleteFirst(&head);
    display(head);
    iRet = count(head);
    printf("total nodes are:%d\n", iRet);

    deleteLast(&head);
    display(head);
    iRet = count(head);
    printf("total nodes are:%d\n", iRet);

    deleteAtPos(&head, 4);
    display(head);
    iRet = count(head);
    printf("total nodes are:%d\n", iRet);

    return 0;
}