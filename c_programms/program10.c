/////////////////////////////////////////////////////////////////////
//
// Include required header files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
/////////////////////////////////////////////////////////////////////
//
// Function Name:AddTwoNumbers
// Input:        float,float
// Output:       float
// Description:  perform addition of two floats
// Date:         08/05/2026
// Author:       shubham suresh isai
//
//////////////////////////////////////////////////////////////////////
float AddTwoNumbers(
                    float fno1, //first input
                    float fno2 //second input
                   )
{
    float fAns = 0.0f;        //variable store to result
    fAns = fno1 + fno2;       //perform addition
    return fAns;
}
///////////////////////////////////////////////////////////////////////
//
//Application to perform addition of two float values
//
///////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f; // To store first input
    float fValue2 = 0.0f; // To store second input
    float fResult = 0.0f; // To store the result
    printf("enter the first number:\n");
    scanf("%f", &fValue1);
    printf("enter the second number:\n");
    scanf("%f", &fValue2);
    fResult = AddTwoNumbers(fValue1, fValue2);
    printf("addition of two numbers is:%f", fResult);
    return 0;
}
/////////////////////////////////////////////////////////////////////////
//
// Input: 10.0    11.0
// Output:21.0
//
//////////////////////////////////////////////////////////////////////////