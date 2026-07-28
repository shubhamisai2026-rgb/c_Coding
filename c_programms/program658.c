#include <stdio.h>
int main()
{
    int i = 0;
    int a = 0;
    int b = 1;
    int c = 0;
    int no = 0;
    printf("enter a your number:");
    scanf("%d", &no);
    printf("%d\n", a);
    printf("%d\n", b);
    for (i = 0; i <= no; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
    return 0;
}