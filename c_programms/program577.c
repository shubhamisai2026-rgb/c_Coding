#include <stdio.h>
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
    NODE obj1, obj2, obj3;
    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    PNODE head = NULL;
    PNODE temp = NULL;

    head = &obj1;

    temp = head;
    int iCount = 0;
    while (temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }

    printf("total nodes:%d", iCount);

    return 0;
}