#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void insertFirst(PPNODE first,PPNODE last,int no)
{
    PNODE newnode=NULL;
    newnode=(PNODE)malloc(sizeof(NODE));
    newnode->data=no;
    newnode->next=NULL;
    if(*first==NULL && *last==NULL)
    {
        *first=newnode;
        *last=newnode;
    }
    else
    {
        newnode->next=*first;
        *first=newnode;
    }
    (*last)->next=*first;
}

void insertLast(PPNODE first,PPNODE last,int no)
{
    PNODE newnode=NULL;
    newnode=(PNODE)malloc(sizeof(NODE));
    newnode->next=NULL;
    newnode->data=no;
    if(*first==NULL && *last==NULL)
    {
        *first=newnode;
        *last=newnode;
    }
    else
    {
      (*last)->next=newnode;
       *last=(*last)->next;
    }
    (*last)->next=*first;
}

void display(PNODE first,PNODE last)
{
    do
    {
        printf("%d->",first->data);
        first=first->next;
    }while(first!=last->next);
}
int main()
{
    PNODE head=NULL;
    PNODE tail=NULL;
     insertFirst(&head,&tail,11);
     insertFirst(&head,&tail,31);
     insertFirst(&head,&tail,32);
     display(head,tail);

     printf("\n");
     
     insertLast(&head,&tail,34);
     insertLast(&head,&tail,64);
     insertLast(&head,&tail,34);
     display(head,tail);
}