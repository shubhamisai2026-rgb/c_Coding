#include <stdio.h>
void display(int ino)
{
    int icnt = 0;
    // filter
    if (ino < 0)
    {
        printf("invalid input...\n");
        return;
    }
    for (icnt = 1; icnt <= ino; icnt++)
    {
        printf("%d\n", icnt++);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter the frequency");
    scanf("%d", &ivalue);
    display(ivalue);
    return 0;
}