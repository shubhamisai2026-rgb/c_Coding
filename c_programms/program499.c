#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT iNo = 0;
    UINT iPos = 0;
    UINT iMask = 0xFFFFFFF7;
    printf("enter a your number:");
    scanf("%d", &iNo);

    printf("enter a position:");
    scanf("%d", &iPos);

    iMask = iMask << (iPos - 1);

    iNo = iMask & iNo;

    printf("updated number is:%d", iNo);
    return 0;
}