#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//time complexity o(N)
bool LinearSearch(int arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    if (iCount == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int iCnt = 0;
    bool iRet = false;
    int iNo = 0;
    printf("enter the size of array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(sizeof(int) * iLength);
    printf("enter the elements of array:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    printf("enter the element you want to search:");
    scanf("%d", &iNo);
    iRet = LinearSearch(brr, iLength, iNo);
    if (iRet == true)
    {
        printf("elements is the present in array....");
    }
    else
    {
        printf("element is not present in the array....");
    }
    free(brr);
    return 0;
}