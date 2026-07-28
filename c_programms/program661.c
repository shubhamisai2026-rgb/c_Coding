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
     newnode->next=NULL;
     newnode->data=no;
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
     (*last)->next=(*first);
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
        (*last)=(*last)->next;
    }
    (*last)->next=(*first);
}

void display(PNODE head,PNODE tail)
{
    if(head!=NULL && tail!=NULL)
    {
     do
     {
        printf("%d->",head->data);
        head=head->next;
     }  while(head!=tail->next);
    }
}

int main()
{
    PNODE head=NULL;
    PNODE tail=NULL;
    insertFirst(&head,&tail,11);
    insertFirst(&head,&tail,21);
    insertFirst(&head,&tail,31);
    display(head,tail);
    printf("\n");

    insertLast(&head,&tail,41);
    insertLast(&head,&tail,51);
    insertLast(&head,&tail,61);
    display(head,tail);

    return 0;
}