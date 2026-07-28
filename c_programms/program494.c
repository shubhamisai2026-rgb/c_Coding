#include <stdio.h>
typedef unsigned int UINT;
// position 15
int main()
{
    UINT iNo = 0;
    UINT iMask = 0;

    printf("enter a your number:");
    scanf("%d", &iNo);

    iMask = 0x4000;
    iNo = iNo ^ iMask;

    printf("updated number is:%d", iNo);
    return 0;
}