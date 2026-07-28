/*ALGORITHM
START
     Accept first number as no1
     accept second number as no2
     perform addition of no1 and no2
     display the result
STOP

*/

#include <stdio.h>
int main()
{
    // variable creation with default values
    float i = 0.0f, j = 0.0f, k = 0.0f;
    printf("enter the first number:\n");
    scanf("%f", &i);
    printf("enter the second number:\n");
    scanf("%f", &j);
    k = i + j;
    printf("addition of two numbers is:%f", k);
    return 0;
}