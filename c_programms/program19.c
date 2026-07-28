#include <stdio.h>
int CalculateTicketPrice(int iage)
{
    // input updater
    if (iage < 0)
    {
        iage = -iage;
    }
    if (iage >= 0 && iage <= 5)
    {
        return 0;
    }
    else if (iage >= 6 && iage <= 18)
    {
        return 500;
    }
    else if (iage >= 19 && iage <= 50)
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
    int ivalue = 0;
    int iret = 0;
    printf("please enter your age to calculate ticket prices :");
    scanf("%d", &ivalue);
    iret = CalculateTicketPrice(ivalue);
    printf("your ticket price will be %d rupees\n", iret);
    return 0;
}