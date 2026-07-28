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

void insertFirst(PPNODE first, PPNODE last, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->next = NULL;
    newnode->data = no;
    if (*first == NULL && *last == NULL)
    {
        *first = newnode;
        *last = newnode;
    }
    else
    {
        newnode->next = *first;
        *first = newnode;
    }
    (*last)->next = (*first);
}

void insertLast(PPNODE first, PPNODE last, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->next = NULL;
    newnode->data = no;
    if (*first == NULL && *last == NULL)
    {
        *first = newnode;
        *last = newnode;
    }
    else
    {
        (*last)->next = newnode;
        (*last) = (*last)->next;
    }
    (*last)->next = (*first);
}

void display(PNODE head, PNODE tail)
{
    if (head != NULL && tail != NULL)
    {
        do
        {
            printf("%d->", head->data);
            head = head->next;
        } while (head != tail->next);
    }
}
void deleteFirst(PPNODE first, PPNODE last)
{
    if (*first == NULL && *last == NULL)
    {
        return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = *first;
        *first = (*first)->next;
        (*last)->next = (*first);
        free(temp);
    }
}

void deleteLast(PPNODE first, PPNODE last)
{
    if (*first == NULL && *last == NULL)
    {
        return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = *first;
        while (temp->next != (*last))
        {
            temp = temp->next;
        }
        free(*last);
        *last = temp;
        (*last)->next = *first;
    }
}

void insertAtPos(PPNODE first, PPNODE last, int no, int pos)
{
    int iRet = 0;
    iRet = count(*first, *last);
    if ((pos < 1) || (pos > iRet + 1))
    {
        return;
        printf("invalid position.....\n");
    }
    else if (pos == 1)
    {
        insertFirst(first, last, no);
    }
    else if (pos == iRet + 1)
    {
        insertLast(first, last, no);
    }
    else
    {
        PNODE newnode = NULL;
        newnode = (PNODE)malloc(sizeof(NODE));
        newnode->next = NULL;
        newnode->data = no;
        int i = 0;
        PNODE temp = NULL;
        temp = *first;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
int count(PNODE first, PNODE last)
{
    int iCount = 0;
    if (first == NULL && last == NULL)
    {
        return iCount;
    }
    do
    {
        iCount++;
        first = first->next;
    } while (first != last->next);
    return iCount;
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    insertFirst(&head, &tail, 11);
    insertFirst(&head, &tail, 21);
    insertFirst(&head, &tail, 31);
    display(head, tail);
    printf("\n");

    insertLast(&head, &tail, 41);
    insertLast(&head, &tail, 51);
    insertLast(&head, &tail, 61);
    display(head, tail);
    printf("\n");

    int iRet = 0;
    iRet = count(head, tail);
    printf("total nodes ara:%d\n", iRet);

    deleteFirst(&head, &tail);
    display(head, tail);
    iRet = count(head, tail);
    printf("total nodes ara:%d\n", iRet);

    deleteLast(&head, &tail);
    display(head, tail);
    iRet = count(head, tail);
    printf("total nodes ara:%d\n", iRet);

    insertAtPos(&head, &tail, 71, 2);
    insertAtPos(&head, &tail, 81, 2);
    insertAtPos(&head, &tail, 91, 2);
    display(head, tail);
    iRet = count(head, tail);
    printf("total nodes ara:%d\n", iRet);

    return 0;
}