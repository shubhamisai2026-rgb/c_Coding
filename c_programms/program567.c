#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node nobj;
    nobj.data=11;
    nobj.next=NULL;
    printf("%d\n",nobj.data);
    printf("%d",nobj.next);
    return 0;
}