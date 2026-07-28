#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int c = 0;
    for (int i = 0; i < 10; i++)
    {
        a = c;
        c = a + b;
        b = a;
        printf("%d\t", a);
    }
}