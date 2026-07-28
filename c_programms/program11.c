/*
-------------------------------Algorithm----------------------------
START

       Accept Nunber As NO
       IF No is completely Divisible by 2

       Then print Even\Otherwise odd

STOP

------------------------------Algorithm 2-----------------------------
START
       Accept Number As No
       Devide No by 2
       If Remainder is 0
       then print As Even
       Otherwise
       print odd
STOP

*/
#include <stdio.h>
int main()
{
    int iValue = 0;
    int iRemainder = 0;
    printf("enter number:\n");
    scanf("%d", &iValue);
    iRemainder = iValue % 2;
    if (iRemainder == 0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
    return 0;
}
