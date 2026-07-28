#include <stdio.h>
int display(int num)
{
    int iRup = 0;
    iRup = num * 70;
    return iRup;
}
int main()
{
    int num = 0;
    int Ret = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    Ret = display(num);
    printf("indian rupees:%d", Ret);
    return 0;
}