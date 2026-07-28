#include <stdio.h>
typedef unsigned int UINT;
int Toggle(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask = 0;
    if ((iPos1 < 1 || iPos1 > 32) || (iPos2 < 1 || iPos2 > 32))
    {
        printf("invalid position.....");
        return 0;
    }
    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);
    iMask = iMask1 | iMask2;

    UINT iResult = iMask ^ iNo;

    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iLocation1 = 0;
    UINT iLocation2 = 0;
    printf("enter the number:");
    scanf("%d", &iValue);
    printf("enter the position first:");
    scanf("%d", &iLocation1);
    printf("enter the position second:");
    scanf("%d", &iLocation2);
    UINT iRet = 0;
    iRet = Toggle(iValue, iLocation1, iLocation2);
    printf("updated number is:%d", iRet);
    return 0;
}
