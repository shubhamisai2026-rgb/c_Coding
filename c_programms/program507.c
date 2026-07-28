#include <stdio.h>
typedef unsigned int UINT;
// position 12 & 23
int main()
{
    UINT No = 0;
    UINT Result = 0;
    UINT Mask = 0x00400800;
    printf("enter a number:");
    scanf("%d", &No);
    Result = No ^ Mask;
    printf("updated number is:%d", Result);
    return 0;
}