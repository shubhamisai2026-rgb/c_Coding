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
int max(PNODE first,int no)
{
   int count=0;
   while(first!=NULL)
   {
    if(first->data>no)
    {
        count++;
    }
    first=first->next;
   }
   return count;
}
int min(PNODE first,int no)
{
   int count=0;
   while(first!=NULL)
   {
    if(first->data<no)
    {
        count++;
    }
    first=first->next;
   }
   return count;
}
int main()
{
    PNODE head=NULL;
    insert(&head,11);
    insert(&head,22);
    insert(&head,24);
    insert(&head,25);

    display(head);

    
    int sa=0;
    sa=lastoccur(head,22);
    printf("number of the frequency:%d",sa);

    int iRet=max(head,11);
    printf("total max of 11 are:%d",iRet);

    iRet=min(head,22);
    printf("total min of 22 are:%d",iRet);
    return 0;
}