#include <stdio.h>
int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;
    printf("enter the lenght of array is:");
    scanf("%d", &iLength);
    int arr[iLength];
    printf("enter the array elements:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &arr[iCnt]);
    }
    iRet = display(arr, iLength);
    printf("addition of array element is:%d", iRet);
    return 0;
}
int display(int brr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + brr[iCnt];
    }
    return iSum;
}