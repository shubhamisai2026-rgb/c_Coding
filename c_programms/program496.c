#include <stdio.h>
typedef unsigned int UINT;
UINT ToggleBit(int iNo, int iPos)
{
    UINT iMask = 0x1;
    iMask=iMask<<(iPos-1);
    UINT iResult = 0;
    iResult = iNo ^ iMask;
}
int main()
{
    UINT iNo = 0;
    UINT iPos = 0;
    printf("enter a number:");
    scanf("%d", &iNo);

    printf("enter a position:");
    scanf("%d", &iPos);

    UINT Ret = 0;

    Ret = ToggleBit(iNo, iPos);

    printf("updated number is:%d", Ret);

    return 0;
}

