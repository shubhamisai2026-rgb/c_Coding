#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "jay ganesh";
    int iRet = 0;
    iRet = strlen(str);
    printf("length of the string:%d\n", iRet);

    iRet = sizeof(str);
    printf("size of the string:%d", iRet);

    return 0;
}