#include <stdio.h>
typedef struct node NODE;
struct node
{
    int data;
    NODE *next;
};
int main()
{
    NODE obj1, obj2, obj3;
    NODE *head;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    printf("%d\n", head->data);
    printf("%d\n", head->next->data);
    printf("%d\n", head->next->next->data);

    return 0;
}