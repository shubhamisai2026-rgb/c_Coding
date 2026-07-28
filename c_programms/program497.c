#include <stdio.h>
typedef unsigned int UINT;
UINT ToggleBit(int iNo, int iPos)
{
    UINT iMask = 0x1;
    UINT Result = 0;
    if (iPos < 1 || iPos > 32)
    {
        printf("invalid position\n");
        return iNo;
    }
    iMask = iMask << (iPos - 1);
    Result = iMask ^ iNo;
    return Result;
}

int main()
{
    UINT iNo = 0;
    UINT iPos = 0;
    printf("enter a your number:");
    scanf("%d", &iNo);

    printf("enter a your position:");
    scanf("%d", &iPos);

    int Ret = 0;

    Ret = ToggleBit(iNo, iPos);

    printf("updated number is:%d", Ret);
    return 0;
}