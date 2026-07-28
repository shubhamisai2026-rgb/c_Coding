#include <stdio.h>
void display(int iNo)
{
    int iCnt = iNo;
    while (iCnt >= 1)
    {
        printf("*\n");
        iCnt--;
    }
}
int main()
{
    int iValue = 0;
    printf("enter a your numbe:");
    scanf("%d", &iValue);
    display(iValue);
    return 0;
}