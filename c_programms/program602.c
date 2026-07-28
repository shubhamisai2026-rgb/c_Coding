#include <stdio.h>
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("enter a number of rows:");
    scanf("%d", &iValue1);
    printf("enter a number of columns:");
    scanf("%d", &iValue2);
    display(iValue1, iValue2);
    return 0;
}
void display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    for (i = iRow; i >= 1; i--)
    {
        for (j = 1; j <=iCol; j++)
        {
            if (i == j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}