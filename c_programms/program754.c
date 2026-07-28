#include <stdio.h>
void display(int no)
{
    static int i = 1;

    while (i <= no)
    {
        printf("jay ganesh...");
        i++;
        display(no);
    }
}
int main()
{
    int iValue = 0;
    printf("enter the frequency...\n");
    scanf("%d", &iValue);
    display(iValue);
    printf("end of the main...");
    return 0;
}