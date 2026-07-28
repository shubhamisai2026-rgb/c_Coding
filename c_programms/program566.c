#include <stdio.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node nobj;
    printf("%lu", sizeof(nobj)); // 12 byte
    // 4 byte=data+8 byte=pointer=12 bytes
}