#include <stdio.h>
int main()
{
    int i = 10;
    int j = 11;
    int temp = 0;
    temp = i;
    i = j;
    j = temp;
    printf("%d\n", i);
    printf("%d", j);
    return 0;
}