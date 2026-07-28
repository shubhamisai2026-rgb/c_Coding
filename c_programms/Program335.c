#include <Stdio.h>
void OddDisplay(int num)
{
    int i = 0;
    for (i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
}
int main()
{
    int num = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    OddDisplay(num);
    return 0;
}