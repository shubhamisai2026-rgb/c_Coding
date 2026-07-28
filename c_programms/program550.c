#include <stdio.h>
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("enter the number of rows:");
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

    for (i = 1; i <= iRow; i++)
    {
        char ch1 = 'A';
        char ch2 = 'a';
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c\t", ch2);
                ch2++;
            }
            else
            {
                printf("%c\t", ch1);
                ch1++;
            }
        }
        printf("\n");
    }
}