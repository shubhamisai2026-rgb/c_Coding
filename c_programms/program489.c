#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT iCnt = 0;
    UINT iMask = 0x800000000;
    for (iCnt = 1; iCnt <= 33; iCnt++) //overflow
    {
        printf("%d:%X\n", iCnt, iMask);
        iMask = iMask >> 1;
    }
    return 0;
}