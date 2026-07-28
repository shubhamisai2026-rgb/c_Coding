#include <stdio.h>
int sumnonfact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt < (iNo / 2); iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    printf("enter a your number:");
    scanf("%d", &iValue);
    int iRet = sumnonfact(iValue);
    printf("addition of non factorials:%d", iRet);
    return 0;
}