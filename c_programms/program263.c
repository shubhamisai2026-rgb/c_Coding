#include <stdio.h>
void displayFactors(int iNo)
{
    int i = 0;
     if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            printf("%d", i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter a your number:");
    scanf("%d", &iValue);
    displayFactors(iValue);
    return 0;
}