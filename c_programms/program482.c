#include <stdio.h>
int main()
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= 100; iCnt++)
    {
        printf("%d\t%X", iCnt, iCnt);
    }
    return 0;
}