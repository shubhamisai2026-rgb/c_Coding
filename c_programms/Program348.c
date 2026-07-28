#include <stdio.h>
float rectangle(float height, float width)
{
    float area = 0.0f;
    area = height * width;
    return area;
}
int main()
{
    float height = 0.0f;
    float width = 0.0f;
    printf("enter the height of the rectangle:");
    scanf("%f", &height);
    printf("enter the width of the rectangle:");
    scanf("%f", &width);
    float area = 0.0f;
    area = rectangle(height, width);
    printf("area of the rectangle is:%f", area);
    return 0;
}