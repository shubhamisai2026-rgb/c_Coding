#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    // Largest value of the integer
    UINT iMask = 0xFFFFFFF;
    printf("%d\t%X", iMask, iMask);
    return 0;
}