#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void insertFirst(PPNODE first,PPNODE last,int no)
{

}
void insertLast(PPNODE first,PPNODE last,int no)
{

}
void insertAtPos(PPNODE first,PPNODE last,int pos,int no)
{

}
void deleteFirst(PPNODE first,PPNODE last)
{

}
void deleteLast(PPNODE first,PPNODE last)
{

}
void deleteAtPos(PPNODE first,PPNODE last,int pos)
{

}
int count(PNODE first,PNODE last)
{

}
void display(PNODE first,PNODE last)
{

}
int main()
{
    PNODE head=NULL;
    PNODE tail=NULL;
    return 0;
}
