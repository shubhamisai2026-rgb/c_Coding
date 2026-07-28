#include <stdio.h>
typedef unsigned int UINT;
UINT OffBit(int iNo, int iPos)
{
    UINT iMask = 0x1;
    iMask = ~iMask;
    iMask = iMask << (iPos - 1);
    UINT iResult = 0;
    iResult = iMask & iNo;
    return iResult;
}
UINT main()
{
    UINT iNo = 0;
    UINT iPos = 0;
    printf("enter a number:");
    scanf("%d", &iNo);

    printf("enter a position of a number:");
    scanf("%d", &iPos);

    UINT Ret = 0;

    Ret = OffBit(iNo, iPos);

    printf("updated number is:%d", iNo);

    return 0;
}