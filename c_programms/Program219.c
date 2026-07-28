#include <stdio.h>
#include <stdlib.h>
int LinearSearch(int arr[], int iSize)
{
    int iCnt = 0;
    int iMin = arr[0];
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (iMin > arr[iCnt])
        {
            iMin = arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int *brr = NULL;
    int iRet = 0;
    int iLength = 0;
    int iCnt = 0;
    printf("enter the size of array elements:");
    scanf("%d", &iLength);
    brr = (int *)malloc(sizeof(int) * iLength);
    printf("enter the array elements:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    iRet = LinearSearch(brr, iLength);
    printf("minimum element of array is:%d", iRet);
    free(brr);
    return 0;
}