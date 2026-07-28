#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool LinearSearch(int arr[], int iSize)
{
    int iCnt = 0;
    bool iFlag = false;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == 11)
        {
            iFlag = true;
            break;
        }
    }
    return iFlag;
}
int main()
{
    int *brr = NULL;
    int iCnt = 0;
    int iLength = 0;
    bool iRet = false;
    printf("enter the size of array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(sizeof(int) * iLength);
    printf("enter the array elements:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    iRet = LinearSearch(brr, iLength);
    if (iRet == true)
    {
        printf("element is present.......");
    }
    else
    {
        printf("elements is not a present...........");
    }
    free(brr);
    return 0;
}