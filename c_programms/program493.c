#include <stdio.h>
typedef unsigned int UINT;
// position 11
int main()
{
    UINT iNo = 0;
    UINT iMask = 0;
    printf("enter a number:");
    scanf("%d", &iNo);

    iMask = 0x400;
    iNo = iNo ^ iMask;

    printf("change the number:%d", iNo);
    return 0;
}