#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT iMask = 0xFFFFFFFF;
    printf("Before:%X\n", iMask);
    iMask = ~iMask;
    printf("After:%X\n", iMask);
    return 0;
}