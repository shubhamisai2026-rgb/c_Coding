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

int firstoccur(PNODE first,int no)
{
    int i=1;
    while(first!=NULL)
    {
        if(first->data==no)
        {
            return i;
        }
        first=first->next;
        i++;
    }
    return -1;
}
int main()
{
    PNODE head=NULL;
    insert(&head,11);
    insert(&head,22);
    insert(&head,24);
    insert(&head,33);

    display(head);

    int loc=0;
    loc=firstoccur(head,22);
    printf("location of the element is:%d",loc);
    return 0;
}