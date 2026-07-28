#include <stdio.h>
void display(int no)
{
    auto int i = 0;
    i = 1;
    while (i <= no)
    {
        printf("jay ganesh..\n");
        i++;
    }
}
int main()
{
    int iValue = 0;
    printf("enter the frequency...\n");
    scanf("%d", &iValue);
    display(iValue);
    return 0;
}