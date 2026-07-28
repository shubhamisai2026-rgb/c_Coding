#include <stdio.h>
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("enter the number of rows:");
    scanf("%d", &iValue1);
    printf("enter the number of columns:");
    scanf("%d", &iValue2);
    display(iValue1, iValue2);
    return 0;
}
void display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';
    for (i = 1; i <= iRow; i++, ch++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
        }
        printf("\n");
    }
}