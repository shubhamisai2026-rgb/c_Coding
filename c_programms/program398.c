#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char *str = "Ganesh";
    while (*str != '\0')
    {
        str++;
        count++;
    }
    printf("length of the string is:%d", count);
    return 0;
}