#include <stdio.h>
int main()
{
    int no1 = 0;
    int no2 = 0;
    printf("enter a first number:");
    scanf("%d", &no1);
    printf("enter a second number:");
    scanf("%d", &no2);
    int iAns = 0;
    iAns = no1 + no2;
    printf("addition of two numbers is:%d", iAns);
    return 0;
}