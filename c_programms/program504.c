#include <stdio.h>
typedef unsigned int UINT;
//  1 0 1 1 0 0 0 0
//  0 1 0 0 0 0 0 0
int main()
{
    UINT iMask = 0xFFFFFFBF;
    printf("Before:%X\n", iMask);
    iMask = ~iMask;
    printf("After:%X", iMask);
    return 0;
}