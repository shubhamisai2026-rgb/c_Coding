#include <stdio.h>
void revfact(int iNo)
{
    int i = 0;
    for (i = iNo / 2; i >= 1; i--)
    {
        if ((iNo) % i == 0)
        {
            printf("%d\n", i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter a your number:");
    scanf("%d", &iValue);
    revfact(iValue);
    return 0;
}