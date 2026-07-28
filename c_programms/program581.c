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

void insertFirst(PPNODE temp, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));

    newnode->data = no;
    newnode->next = NULL;

    if (*temp == NULL)
    {
        *temp = newnode;
    }
    else
    {
        newnode->next = *temp;
        *temp = newnode;
    }
}

void insertLast(PPNODE temp, int no)
{
    PNODE newnode = NULL;
    PNODE temp2 = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));

    newnode->data = no;
    newnode->next = NULL;

    if (*temp == NULL)
    {
        *temp = newnode;
    }
    else
    {
        temp2 = *temp;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = newnode;
    }
}

void DeleteFirst(PPNODE temp)
{
    PNODE temp2 = NULL;
    if (*temp == NULL)
    {
        return;
    }
    else if ((*temp)->next == NULL)
    {
        free(*temp);
        *temp = NULL;
    }
    else
    {
        temp2 = *temp;
        *temp = (*temp)->next;
        free(temp2);
    }
}

void DeleteLast(PPNODE temp)
{
    PNODE temp2 = NULL;

    if (*temp == NULL)
    {
        return;
    }
    else if ((*temp)->next == NULL)
    {
        free(*temp);
        *temp = NULL;
    }
    else
    {
        temp2 = *temp;
        while (temp2->next->next != NULL)
        {
            temp2 = temp2->next;
        }
        free(temp2->next);
        temp2->next = NULL;
    }
}

void Display(PNODE temp)
{
    while (temp != NULL)
    {
        printf("|%d|->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int Count(PNODE temp)
{
    int iCount = 0;
    while (temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }
    return iCount;
}

void insertAtPos(PPNODE temp, int no, int pos)
{
    PNODE newnode = NULL;
    PNODE temp2 = NULL;

    int iCnt = 0;
    int iSize = 0;
    iSize = Count(*temp);

    if ((pos < 1) || (pos > iSize + 1))
    {
        printf("invalid position\n");
        return;
    }
    if (pos == 1)
    {
        insertFirst(temp, no);
    }
    else if (pos == iSize + 1)
    {
        insertLast(temp, no);
    }
    else
    {
        newnode = (PNODE)malloc(sizeof(NODE));
        newnode->data = no;
        newnode->next = NULL;

        temp2 = *temp;

        for (iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp2 = temp2->next;
        }
        newnode->next = temp2->next;
        temp2->next = newnode;
    }
}

void DeleteAtPos(PPNODE temp, int pos)
{
    int iSize = 0;
    int iCnt = 0;
    PNODE temp2 = NULL;
    PNODE target = NULL;

    iSize = Count(*temp);

    if ((pos < 1) || (pos > iSize))
    {
        printf("invalid position\n");
        return;
    }
    if (pos == 1)
    {
        DeleteFirst(temp);
    }
    else if (pos == iSize)
    {
        DeleteLast(temp);
    }
    else
    {
        temp2 = *temp;
        for (iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp2 = temp2->next;
        }
        target = temp2->next;
        temp2->next = target->next;
        free(target);
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    insertFirst(&head, 51);
    insertFirst(&head, 21);
    insertFirst(&head, 11);

    Display(head);
    iRet = Count(head);

    printf("number of nodes are:%d\n", iRet);

    insertLast(&head, 101);
    insertLast(&head, 111);
    insertLast(&head, 121);

    Display(head);
    iRet = Count(head);

    printf("number of nodes are:%d\n", iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);

    printf("number of nodes are:%d\n", iRet);

    DeleteLast(&head);

    Display(head);

    iRet = Count(head);

    printf("number of nodes are:%d\n", iRet);

    insertAtPos(&head, 105, 3);
    Display(head);
    iRet = Count(head);

    printf("number of nodes are:%d\n", iRet);

    DeleteAtPos(&head, 3);

    Display(head);
    iRet = Count(head);

    printf("number of nodes are:%d\n", iRet);
    return 0;
}