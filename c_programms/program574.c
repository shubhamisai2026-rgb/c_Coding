#include<stdio.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
int main()
{
    NODE obj1,obj2,obj3;
    PNODE head=NULL;
    head=&obj1;

    obj1.data=11;
    obj1.next=&obj2;

    obj2.data=21;
    obj2.next=&obj3;

    obj3.data=51;
    obj3.next=NULL;

    PNODE temp=head;

    printf("%d\n",temp->data);
    printf("%d\n",temp->next->data);
    printf("%d\n",temp->next->next->data);

    return 0;
}