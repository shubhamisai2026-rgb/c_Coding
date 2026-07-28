#include <stdio.h>
struct node
{
    int data;
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

    return 0;
}
void insertFirst(PPNODE first, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    if (*first == NULL) // Linked list is empty
    {
        *first = newnode;
    }
    else // Linked list contains at least one node
    {
        newnode->next = *first;
        *first = newnode;
    }
}
void insertLast(PPNODE first, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    if (*first == NULL) // Linked list is empty
    {
        *first = newnode;
    }
    else // Linked list at least contains one node
    {
    }
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
    insertFirst(&head, 101);
    insertFirst(&head, 11);
    insertFirst(&head, 21);
    insertFirst(&head, 51);
    return 0;
}