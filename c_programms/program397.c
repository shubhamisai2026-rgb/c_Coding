#include <stdio.h>
int main()
{
    char *str = "Ganesh";
    while (*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
    return 0;
}