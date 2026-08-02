#include <stdio.h>

void strcpy(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'a' && *src <= 'z')
        {
            *dest = *src;
            dest++;
        }
            src++;
    }

}
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("enter the string:");
    scanf("%s", arr);

    strcpy(arr, brr);

    printf("string of capital latters %s", brr);

    return 0;
}