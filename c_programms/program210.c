#include <stdio.h>
#include <stdlib.h>
int CountFrequency(int arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int *brr = NULL;
    int iCnt = 0;
    int iLength = 0;
    int iRet = 0;
    printf("enter the size of array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(sizeof(int) * iLength);
    printf("enter the array elements:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    iRet = CountFrequency(brr, iLength);
    printf("frequency:%d", iRet);
    free(brr);
    return 0;
}