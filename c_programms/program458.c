#include <stdio.h>
void display(int *ptr1, int *ptr2)
{
    int temp = 0;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int no1;
    int no2;
    printf("enter a no1 and no2:");
    scanf("%d\n%d", &no1, &no2);
    display(&no1, &no2);
    printf("%d\n", no1);
    printf("%d\n", no2);
    return 0;
}
