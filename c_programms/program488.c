#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT iCnt = 0;
    UINT iMask = 0x80000000;
    for (iCnt = 1; iCnt <= 32; iCnt++)
    {
        printf("%d:%d\n", iCnt, iMask);
        iMask = iMask >> 1;
    }
    return 0;
}