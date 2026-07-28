#include <stdio.h>
int CalculateTotalPrice(int iAge)
{
    // input filter
    if (iAge < 0)
    {
        return -1;
    }
    if (iAge >= 0 && iAge <= 5)
    {
        return 0;
    }
    else if (iAge >= 6 && iAge <= 18)
    {
        return 500;
    }
    else if (iAge >= 19 && iAge <= 50)
    {
        return 900;
    }
    else
    {
        return 400;
    }
}
int main()
{
    int ivalue = 0, iret = 0;
    printf("enter the value:");
    scanf("%d", &ivalue);
    iret = CalculateTotalPrice(ivalue);
    if (iret == -1)
    {
        printf("please enter a positive age\n");
    }
    else
    {
        printf("your price will be %d rupees %d\n", iret);
    }
    return 0;
}