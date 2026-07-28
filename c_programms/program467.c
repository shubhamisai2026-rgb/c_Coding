#include <stdio.h>
int main()
{
    int no1 = 0;
    int no2 = 0;
    printf("enter a your first number:");
    scanf("%d", &no1);
    printf("enter a your second number:");
    scanf("%d", &no2);
    int iAns = 0;
    iAns = no1 & no2;
    printf("and:%d\n", iAns);
    iAns = no1 | no2;
    printf("or:%d\n", iAns);
    iAns = no1 ^ no2;
    printf("xor:%d", iAns);
}