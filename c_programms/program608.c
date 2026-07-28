#include <stdio.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void display(PNODE first)
{
}

int count(PNODE first)
{
}

void insertFirst(PPNODE first, int no)
{
}

void insertLast(PPNODE first, int no)
{
}

void insertAtPos(PPNODE first, int no, int pos)
{
}

void deleteFirst(PPNODE first)
{
}

void deleteLast(PPNODE first)
{
}

void deleteAtPos(PPNODE first, int pos)
{
}

int main()
{
    PNODE head = NULL;
    return 0;
}