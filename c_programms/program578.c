#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

typedef struct node NODE;
typedef struct node *PNODE;

struct node
{
    int data;
    PNODE next;
};
int main()
{
    PNODE newnode = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 11;
    newnode->next = NULL;
    printf("%d", newnode->data);
    return 0;
}