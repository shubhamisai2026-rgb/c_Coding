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
    float i=0, j=0, k=0;
    printf("enter the first number:\n");
    scanf("%f", &i);
    printf("enter the second number:\n");
    scanf("%f", &j);
    k = i + j;
    printf("addition of two numbers is:%f",k);
    return 0;
}