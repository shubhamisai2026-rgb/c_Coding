#include <stdio.h>
#include <stdlib.h>
void Add_Digits(int arr[], int size)
{
    int i = 0;
    int iDigit = 0;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        while (arr[i] != 0)
        {
            iDigit = arr[i] % 10;
            sum = iDigit + sum;
            arr[i] = arr[i] / 10;
        }
        printf("%d\t", sum);
        sum = 0;
        iDigit = 0;
    }
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int i = 0;
    printf("enter the array of size:");
    scanf("%d", &iLength);
    brr = (int *)malloc(iLength * sizeof(int));
    printf("enter the elements of the array is:");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    Add_Digits(brr, iLength);
    return 0;
}