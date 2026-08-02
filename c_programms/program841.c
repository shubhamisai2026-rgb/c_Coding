#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void insert(PPNODE first,int no)
{
    PNODE newnode=NULL;
    newnode=(PNODE)malloc(sizeof(NODE));
    newnode->data=no;
    newnode->next=NULL;
    if(*first==NULL)
    {
        *first=newnode;
    }
    else
    {
        newnode->next=*first;
        (*first)=newnode;
    }
}

void display(PNODE first)
{
  while(first!=NULL)
  {
    if((first->data)%2==0)
    {
    printf("%d\t",first->data);
    }
    first=first->next;
  }
}

int lastoccur(PNODE first,int no)
{
    int i=0;
    while(first!=NULL)
    {
        if(first->data==no)
        {
            i++;
        }
        first=first->next;
    }
    return i;
}
int main()
{
    PNODE head=NULL;
    insert(&head,11);
    insert(&head,22);
    insert(&head,24);
    insert(&head,22);

    display(head);

    
    int sa=0;
    sa=lastoccur(head,22);
    printf("number of the frequency:%d",sa);
    return 0;
}