#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// L D R
void inorder(PNODE first)
{
    if(first!=NULL)
    {
       inorder(first->lchild);
       printf("%d\n",first->data);
       inorder(first->rchild);
    }
}
// D L R
void preorder(PNODE first)
{
    if(first!=NULL)
    {
        printf("%d\n",first->data);
        preorder(first->lchild);
        preorder(first->rchild);
    }
}
// L D R
void postorder(PNODE first)
{
    if(first!=NULL)
    {
    postorder(first->lchild);
    postorder(first->rchild);
    printf("%d\n",first->data);
    }
}
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
            }
            else if(no==temp->data)
            {
                printf("unable to insert as element is duplication\n");
                free(newnode);
                break;
            }
        }
    }
}

int icount(PNODE first)
{
 static int count=0;
 if(first!=NULL)
 {
    count++;
    icount(first->lchild);
    icount(first->rchild);
 }
 return count;
}


int main()
{
    PNODE head=NULL;

    insert(&head,11);
    insert(&head,5);
    insert(&head,17);
      insert(&head,42);
    insert(&head,421);
    insert(&head,21);

  
    printf("inorder display:\n");
    inorder(head);

    printf("preorder display:\n");
    preorder(head);

    printf("postorder display:\n");
    postorder(head);

    int iRet=icount(head);
    printf("total node in tree:%d",iRet);
    return 0;
}