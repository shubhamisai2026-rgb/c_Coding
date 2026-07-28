#include <stdio.h>
void factnonfact(int iNo)
{
    int i = 0;
    int iFact = 0;
    int iNfact = 0;
    for (i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iFact = iFact + i;
        }
        else
        {
            iNfact = iNfact + i;
        }
    }
    printf("%d\n", iFact);
    printf("%d", iNfact);
}
int main()
{
    int iValue = 0;
    printf("enter a your value:");
    scanf("%d", &iValue);
    factnonfact(iValue);
    return 0;
}