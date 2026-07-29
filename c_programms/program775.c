#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void insert(PPNODE first,int no)
{
    PNODE newnode=NULL;
    PNODE temp=NULL;
    newnode=(PNODE)malloc(sizeof(NODE));
    newnode->data=no;
    newnode->lchild=NULL;
    newnode->rchild=NULL;
    if(*first==NULL)
    {
        *first=newnode;
    }
    else
    {
        temp=*first;
        while(1)
        {
            if(no>temp->data)
            {
              if(temp->rchild==NULL)
              {
                temp->rchild=newnode;
                break;
              }
              temp=temp->rchild;
            }
            else if(no<temp->data)
            {
                if(temp->lchild==NULL)
                {
                    temp->lchild=newnode;
                    break;
                }
                temp=temp->lchild;
            }
            else if(temp->data==no)
            {
                printf("unable to insert a to add a duplicate element\n");
                free(newnode);
                break;
            }
        }
      
    }
}

int main()
{
    PNODE head=NULL;
    insert(&head,11);
    insert(&head,21);
    insert(&head,31);
}