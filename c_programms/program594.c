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
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;

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
        temp = *first;
        PNODE newnode = NULL;
        newnode = (PNODE)malloc(sizeof(NODE));
        newnode->data = no;
        newnode->next = NULL;
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
        PNODE temp = NULL;
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
        PNODE temp = NULL;
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
        printf("invalid position...!");
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

        for (iCnt = 1; iCnt < pos-1 ; iCnt++)
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
    int iRet = 0;
    PNODE head = NULL;
    insertFirst(&head, 101);
    insertFirst(&head, 11);
    insertFirst(&head, 21);
    insertFirst(&head, 51);

    display(head);
    iRet = count(head);
    printf("total nodes is:%d\n", iRet);

    insertLast(&head, 102);
    insertLast(&head, 12);
    insertLast(&head, 22);
    insertLast(&head, 52);

    display(head);
    iRet = count(head);
    printf("total nodes is:%d\n", iRet);

    insertAtPos(&head, 23, 4);
    display(head);
    iRet = count(head);
    printf("total nodes is:%d\n", iRet);

    deleteFirst(&head);
    display(head);
    iRet = count(head);
    printf("total nodes is:%d\n", iRet);

    deleteLast(&head);
    display(head);
    iRet = count(head);
    printf("total nodes is:%d\n", iRet);

    deleteAtPos(&head,3);
    display(head);
    iRet = count(head);
    printf("total nodes:%d\n", iRet);

    return 0;
}