#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;

int main()
{
 PNODE head=NULL;
 return 0;
}