#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr = NULL;
    int iLength = 0;
    int iCnt = 0;
    printf("enter the lenght of array:");
    scanf("%d", &iLength);
    arr = (int *)malloc(iLength * sizeof(int));
    printf("enter the elements of the array is:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &arr[iCnt]);
    }
    display(arr, iLength);
    free(arr);
    return 0;
}
void display(int brr[], int iSize)
{
    int iCnt = 0;
    printf("elements of the array is:");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", brr[iCnt]);
    }
}