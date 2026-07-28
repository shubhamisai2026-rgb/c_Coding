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
       newnode->next=*first;
       (*first)->prev=newnode;
       (*first)=newnode;
    } 
    (*last)->next=*first;
    (*first)->prev=(*last);
}
void insertLast(PPNODE first, PPNODE last, int no)
{
}
void insertAtPos(PPNODE first, PPNODE last, int pos, int no)
{
}
void deleteFirst(PPNODE first, PPNODE last)
{
}
void deleteLast(PPNODE first, PPNODE last)
{
}
void deleteAtPos(PPNODE first, PPNODE last, int pos)
{
}
int count(PNODE first, PNODE last)
{
}
void display(PNODE first, PNODE last)
{
    
    while(first!=last)
    {
      printf("%d<->",first->data);
      first=first->next;
    }
    printf("%d<->",last->data);
    printf("NULL\n");
}
int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    insertFirst(&head,&tail,11);
    insertFirst(&head,&tail,21);
    insertFirst(&head,&tail,31);
    display(head,tail);
    return 0;
}
