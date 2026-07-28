#include <stdio.h>
#include<String.h>
int main()
{
    int count = 0;
    char *str = "Ganesh";
    printf("length of the string is:%lu", strlen(str));
    while (*str != '\0')
    {
        str++;
        count++;
    }
    printf("length og the string is:%d", count);
    return 0;
}