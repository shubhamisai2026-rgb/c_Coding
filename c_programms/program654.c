#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
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
   if(((*first)==NULL )&& ((*last)==NULL))
   {
    *first=newnode;
    *last=newnode;
   }
   else
   {
    newnode->next=(*first);
    (*first)=newnode;
   }
  (*last)->next=(*first);
}

void display(PNODE first,PNODE last)
{
if(first==NULL||last==NULL)
{
    return;
}
while(first!=last->next)
    {
        printf("%d->",first->data);
        first=first->next;
    }
    printf("%d",last->data);
}

int main()
{
    PNODE head=NULL;
    PNODE tail=NULL;
    insertFirst(&head,&tail,11);
    insertFirst(&head,&tail,21);
    insertFirst(&head,&tail,31);

    display(head,tail);

    return 0;

}