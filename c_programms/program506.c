
#include <stdio.h>
typedef unsigned int UINT;
// position 9 & 17
int main()
{
    UINT iNo = 0;
    UINT iResult = 0;
    UINT iMask = 00010100;

    printf("enter a your number:");
    scanf("%d", &iNo);

    iResult = iNo ^ iMask;

    printf("updated number is:%d", iResult);

    return 0;
}