#include <stdio.h>
typedef unsigned int UINT;
// position 3 & 8
int main()
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    iMask1 = iMask1 << 2;
    iMask2 = iMask2 << 7;
    UINT iMask = 0;
    iMask = iMask1 | iMask2;
    UINT iNo = 0;
    UINT iResult = 0;
    printf("enter a your number:");
    scanf("%d", &iNo);
    iResult = iNo ^ iMask;
    printf("updated number is:%d", iResult);
    return 0;
}