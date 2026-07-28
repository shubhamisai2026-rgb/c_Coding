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

void insertFirst(PPNODE first, PPNODE last, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = no;
    if (*first == NULL && *last == NULL)
    {
        *first = newnode;
        *last = newnode;
    }
    else
    {
        newnode->next = *first;
        (*first)->prev = newnode;
        (*first) = newnode;
    }
    (*last)->next = *first;
    (*first)->prev = (*last);
}
void insertLast(PPNODE first, PPNODE last, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    newnode->prev = NULL;
    if (*first == NULL && *last == NULL)
    {
        *first = newnode;
        *last = newnode;
    }
    else
    {
        (*last)->next = newnode;
        newnode->prev = *last;
        *last = newnode;
    }
    (*last)->next = (*first);
    (*first)->prev = *last;
}
void insertAtPos(PPNODE first, PPNODE last, int pos, int no)
{
    int iRet = count(*first, *last);
    if (pos < 1 || pos > iRet + 1)
    {

        return;
    }
    if (pos == 1)
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
        newnode->data = no;
        newnode->next = NULL;
        newnode->prev = NULL;
        int i = 0;
        PNODE temp = NULL;
        temp = (*first);
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev=newnode;
        temp->next=newnode;
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
    }
    else
    {
        (*first) = (*first)->next;
        free((*first)->prev);
    }
    (*first)->prev = (*last);
    (*last)->next = (*first);
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
    }
    else
    {
        PNODE temp = NULL;
        temp = (*last)->prev;
        free(*last);
        *last = temp;
        (*last)->next = (*first);
        (*first)->prev = (*last);
    }
}
void deleteAtPos(PPNODE first, PPNODE last, int pos)
{
}
int count(PNODE first, PNODE last)
{
    int iCount = 0;
    do
    {
        first = first->next;
        iCount++;
    } while (first != last->next);
    return iCount;
}
void display(PNODE first, PNODE last)
{
    if (first == NULL && last == NULL)
    {
        return;
    }

    while (first != last)
    {
        printf("%d<->", first->data);
        first = first->next;
    }
    printf("%d<->", last->data);
    printf("NULL\n");
}
int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    insertFirst(&head, &tail, 11);
    insertFirst(&head, &tail, 21);
    insertFirst(&head, &tail, 31);
    display(head, tail);

    insertLast(&head, &tail, 41);
    insertLast(&head, &tail, 51);
    insertLast(&head, &tail, 61);
    int iRet = 0;
    iRet = count(head, tail);
    printf("total nodes are...%d\n", iRet);
    display(head, tail);

    deleteFirst(&head, &tail);
    iRet = count(head, tail);
    printf("total nodes are...%d\n", iRet);
    display(head, tail);

    deleteLast(&head, &tail);
    iRet = count(head, tail);
    printf("total nodes are...%d\n", iRet);
    display(head, tail);

   
    insertAtPos(&head, &tail, 2, 151);
        insertAtPos(&head, &tail, 2, 161);
    iRet = count(head, tail);
    printf("total nodes are...%d\n", iRet);
    display(head, tail);

    return 0;
}
