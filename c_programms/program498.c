#include <stdio.h>
typedef unsigned int UINT;
// position 4
UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0xFFFFFF7;
    UINT Result = 0;
    if (iPos < 1 || iPos > 32)
    {
        printf("invalid position....");
        return iNo;
    }
    iMask = iMask << (iPos - 1);
    Result = iMask ^ iNo;
    return Result;
}
int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("enter the value from a user:");
    scanf("%d", &iValue);

    printf("enter a position:");
    scanf("%d", &iLocation);

    iRet = OffBit(iValue, iLocation);

    printf("updated value is:%X", iRet);

    return 0;
}