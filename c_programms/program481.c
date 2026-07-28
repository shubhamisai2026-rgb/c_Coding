#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT iMask = 0x1;

    printf("%X\n", iMask); 
    iMask = iMask << 1;

    printf("%X\n", iMask); 
    iMask = iMask << 1;

    printf("%X\n", iMask); 
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%x\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask); 
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask); 
    iMask = iMask << 1;

    printf("%X\n", iMask); 
    iMask = iMask << 1;

    printf("%X\n", iMask); 
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask); 
    iMask = iMask << 1;

    printf("%X", iMask);
    iMask = iMask << 1;

    return 0;
}