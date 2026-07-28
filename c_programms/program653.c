#include <stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;
void display(PNODE first, PNODE last)
{
}
int count(PNODE first, PNODE last)
{
    return 0;
}
void insertFirst(PPNODE first, PPNODE last, int no)
{
}
void insertLast(PPNODE first, PPNODE last, int no)
{
}
void insertAtPos(PPNODE first, PPNODE last, int no, int pos)
{
}
void deleteFirst(PPNODE first, PPNODE Last)
{
}
void deleteLast(PPNODE first, PPNODE last)
{
}
void deleteAtPos(PPNODE first, PPNODE last, int pos)
{
}
int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    return 0;
}