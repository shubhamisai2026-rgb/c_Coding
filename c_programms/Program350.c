#include <stdio.h>
float display(float num)
{
    float celsius = 0.0f;
    celsius = (num - 32) * 5 / 9;
    return celsius;
}
int main()
{
    float num = 0.0f;
    printf("enter a your number:");
    scanf("%f", &num);
    float ret = 0.0f;
    ret = display(num);
    printf("%f", ret);
    return 0;
}