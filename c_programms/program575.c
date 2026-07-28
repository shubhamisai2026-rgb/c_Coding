#include <stdio.h>
#pragma pack(1)
typedef struct node NODE;
typedef struct node *PNODE;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    NODE obj1, obj2, obj3;
    PNODE head = NULL;

    head=&obj1;
    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    PNODE temp=NULL;
    temp= head;

    printf("%d\n", temp->data);
    temp = temp->next;

    printf("%d\n", temp->data);
    temp = temp->next;

    printf("%d\n", temp->data);
    temp = temp->next;

    printf("%d\n", temp->data);
    return 0;
}