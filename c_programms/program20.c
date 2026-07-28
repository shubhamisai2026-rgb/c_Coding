#include <stdio.h>
int CalculateTicketPrice(int iAge)
{
    // input filter
    if (iAge < 0)
    {
        printf("invalid input\n");
       return 0;
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
    int ivalue = 0;
    int iret = 0;
    printf("please enter your age to calculate ticket prices:");
    scanf("%d", &ivalue);
    iret = CalculateTicketPrice(ivalue);
    printf("your ticket price will be %d rupees\n", iret);
    return 0;
}