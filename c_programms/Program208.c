#include <stdio.h>
#include <stdlib.h>
int SumEven(int arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] % 2 == 0)
        {
            iSum = iSum + arr[iCnt];
        }
    }
    return iSum;
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;
    printf("enter the size of array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(sizeof(int) * iLength);
    printf("enter the array elements:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    iRet = SumEven(brr, iLength);
    printf("addition of even numbers in array:%d", iRet);
    free(brr);
    return 0;
}