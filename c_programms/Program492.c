#include <stdio.h>
typedef unsigned int UINT;
//position 4
int main()
{
    UINT no = 0;
    printf("enter a your number:");
    scanf("%d", &no);
    UINT iMask = 0x00000008;
    no = no ^ iMask;
    printf("change value is:%d", no);
    return 0;
}