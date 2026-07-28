#include <stdio.h>
#include <stdlib.h>
int LinearSearch(int arr[], int iSize)
{
    int iMax = arr[0];
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (iMax < arr[iCnt])
        {
            iMax = arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int iRet = 0;
    int iCnt = 0;
    printf("enter the length of array is:");
    scanf("%d", &iLength);
    brr = (int *)malloc(sizeof(int) * iLength);
    printf("enter the array elements:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    iRet = LinearSearch(brr, iLength);
    printf("maximum element in array:%d", iRet);
    free(brr);
    return 0;
}