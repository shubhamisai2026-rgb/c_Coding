#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    struct node obj1, obj2, obj3;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    printf("%u\n", &obj1);
    printf("%u\n", &obj2);
    printf("%u\n", &obj3);

    printf("%u\n", obj1.next);
    printf("%u\n", obj2.next);
    printf("%u\n", obj3.next);

    printf("%d\n", head->data);
    printf("%d\n", head->next->data);
    printf("%d\n", head->next->next->data);

    return 0;
}