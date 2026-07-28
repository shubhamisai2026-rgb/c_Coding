#include <stdio.h>
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter your number:");
    scanf("%d", &iValue);
    CallByValue(iValue); // call by value
    printf("%d", iValue);
}
int CallByValue(int iNo) // i sent the value and the value increased by 1 also.but this copy will have to
                         // a function
{
    ++iNo;
}
