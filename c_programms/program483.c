#include <stdio.h>
int main()
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= 1000; iCnt++)
    {
        printf("%d\t%X", iCnt, iCnt);
    }
    return 0;
}