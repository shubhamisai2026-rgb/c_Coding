#include <stdio.h>
int multfact(int iNo)
{
    int i = 0;
    int iMul = 1;
    for (i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iMul = iMul * i;
        }
    }
    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter a your value:");
    scanf("%d", &iValue);
    iRet = multfact(iValue);
    printf("multiplication of factors:%d",iRet);
    return 0;
}