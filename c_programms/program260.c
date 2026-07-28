#include <stdio.h>
void display(int iNo, int iFrequency)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\n", iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("enter a your number:");
    scanf("%d", &iValue);
    printf("enter a numer frequency:");
    scanf("%d", &iCount);
    display(iValue, iCount);
    return 0;
}