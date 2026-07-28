#include <stdio.h>
typedef unsigned int UINT;
// position 21 and 27
int main()
{
    UINT iMask = 0x04100000;
    UINT iNo = 0;
    UINT iResult = 0;
    printf("enter a your number:");
    scanf("%d", &iNo);
    iResult = iNo ^ iMask;
    printf("updated number is:%d", iResult);

    return 0;
}