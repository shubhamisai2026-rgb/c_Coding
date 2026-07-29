#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
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
                if(temp->rchild==NULL)
                {
                    temp->lchild=newnode;
                    break;
                }
                temp=temp->lchild;
            }
            else
            {
                 printf("cant be store the duplicate value");
                 free(newnode);
                 break;
            }
        }
    }
}

void inorder(PNODE first)
{
    if(first!=NULL)
    {
        inorder(first->lchild);
        printf("%d",first->data);
        inorder(first->rchild);
    }
}


void preorder(PNODE first)
{
    if(first!=NULL)
    {
        printf("%d\n",first->data);
        preorder(first->lchild);
        preorder(first->rchild);
    }
}

int main()
{
 PNODE head=NULL;

 insert(&head,33);
 insert(&head,45);
 insert(&head,35);
 insert(&head,41);

 inorder(head);
 preorder(head);
}