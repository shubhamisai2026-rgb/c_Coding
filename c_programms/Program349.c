#include <stdio.h>
float display(float num)
{
    float distance = 0.0f;
    distance = num * 1000;
    return distance;
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