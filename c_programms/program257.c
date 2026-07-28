#include <stdio.h>
void display(int iNo)
{
    int iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }
}
int main()
{
    int iValue;
    printf("enter a your value:");
    scanf("%d", &iValue);
    display(iValue);
    return 0;
}