#include <stdio.h>
void display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("enter a number of rows:\n");
    scanf("%d", &iValue1);
    printf("enter a number of columns:\n");
    scanf("%d", &iValue2);
    display(iValue1, iValue2);
    return 0;
}