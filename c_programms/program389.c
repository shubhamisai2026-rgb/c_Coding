#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int size, int no1, int no2)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == no1 || arr[i] <= no2)
        {
            printf("%d", arr[i]);
        }
    }
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    printf("enter the size of a array:\n");
    scanf("%d", &iLength);
    brr = malloc(iLength * sizeof(int));
    printf("enter the elements of the array:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d\t", &brr[i]);
    }
    printf("enter the value1:]\n");
    scanf("%d", &iValue1);
    printf("enter the value:\n");
    scanf("%d", &iValue2);
    display(brr, iLength, iValue1, iValue2);
    return 0;
}