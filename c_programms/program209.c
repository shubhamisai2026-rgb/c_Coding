#include <stdio.h>
#include <stdlib.h>
int CountOdd(int arr[], int iSize)
{
    int iCount = 0;
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] % 2 != 0)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *brr = NULL;
    int iRet = 0;
    printf("enter the size of array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(iLength * sizeof(int));
    printf("enter the array elements:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    iRet = CountOdd(brr, iLength);
    printf("total odd numbers in array:%d", iRet);
    free(brr);
    return 0;
}