#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node INODE;
typedef struct node * PINODE;
typedef struct node ** PPINODE;

#define MAXINODE 5

PINODE head=NULL;

void CreateDILB()
{
    int i=0;
    PINODE temp=head;
    PINODE newnode=NULL;

    for(i=1;i<=MAXINODE;i++)
    {
        newnode=(PINODE)malloc(sizeof(INODE));
        newnode->data=i;
        newnode->next=NULL;

        if(temp==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }
}

void DisplayDILB()
{
    PINODE temp=head;
    while(temp!=NULL)
    {
        printf("|%d|->",temp->data);
        temp=temp->next;
    }
}

int main()
{
    CreateDILB();
    DisplayDILB();
    return 0;
}