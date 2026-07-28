#include <stdio.h>
typedef unsigned int UINT;
// position 3 & 8
int main()
{
    UINT iMask1 = 0x00000004;
    UINT iMask2 = 0x00000080;
    UINT iMask = 0;
    UINT iNo = 0;
    UINT iResult = 0;
    printf("enter a your number:");
    scanf("%d", &iNo);
    iMask = iMask1 | iMask2;
    iResult = iMask ^ iNo;
    printf("updated number is:%d", iResult);
    return 0;
}