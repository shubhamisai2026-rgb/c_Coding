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

void inorder(PNODE first)
{
    if(first!=NULL)
    {
    inorder(first->lchild);
    printf("%d",first->data);
    inorder(first->rchild);
    }
}

void insert(PPNODE first,int no)
{
    PNODE newnode=NULL;
    PNODE temp=NULL;
    newnode=(PNODE)malloc(sizeof(NODE));
    newnode->lchild=NULL;
    newnode->rchild=NULL;
    newnode->data=no;
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
            else
            {
                printf("same elements of data node cant be inserted");
                free(newnode);
                break;
            }
        }
    }
}
int main()
{
    PNODE head=NULL;

    insert(&head,56);
    insert(&head,45);
    insert(&head,42);
    insert(&head,75);
    insert(&head,211);
    insert(&head,34);

    inorder(head);
    return 0;


}