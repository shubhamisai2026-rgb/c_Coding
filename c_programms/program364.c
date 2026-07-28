#include <stdio.h>
void reverse(int num)
{
    int iDigit = 0;
    int r = 0;
    int number = 0;
    while (num != 0)
    {
        iDigit = num % 10;
       printf("%d\t",iDigit);
        num = num / 10;
    }
        
}
int main()
{
    int num = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    reverse(num);
    return 0;
}