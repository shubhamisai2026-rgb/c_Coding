#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node nobj;
    printf("%lu\n", sizeof(nobj)); // 16 byte
    // 4 byte=data + 4 byte=padding +8 byte=pointer=16 byte
    printf("%d", sizeof(nobj.next));
}