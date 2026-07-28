
#include <stdio.h>
int main()
{
    float fValue1 = 0.0f;                                   // To store first input
    float fValue2 = 0.0f;                                  // To store second input
    float fResult = 0.0f;                                 // To store the result
    printf("enter the first number:\n");
    scanf("%f", &fValue1);
    printf("enter the second number:\n");
    scanf("%f", &fValue2);
    fResult = fValue1 + fValue2;                         // perform the addition
    printf("addition of two numbers is:%f", fResult);
    return 0;
}