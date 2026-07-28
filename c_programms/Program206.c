#include <stdio.h>
#include <stdlib.h>
int ArraySum(int arr[], int size)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 0; iCnt < size; iCnt++)
    {
        iSum = iSum + arr[iCnt];
    }
    return iSum;
}
int main()
{
    int *brr = NULL;
    int iRet = 0;
    int iCnt = 0;
    int iSize = 0;
    printf("enter a size of array:");
    scanf("%d", &iSize);
    brr = (int *)malloc(iSize * sizeof(int));
    printf("enter the array elements:");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    iRet = ArraySum(brr, iSize);
    printf("addition of array elements is:%d", iRet);
    free(brr);
    return 0;
}