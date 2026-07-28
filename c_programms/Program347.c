#include <stdio.h>
#define pi 3.14
float display(float radius)
{
    float area = 0.0f;
    area = pi * radius * radius;
    return area;
}
int main()
{
    float Rad = 0.0f;
    printf("enter a your radius:");
    scanf("%f", &Rad);
    float ret = 0.0f;
    ret = display(Rad);
    printf("area of the circle is:%f", ret);

    return 0;
}