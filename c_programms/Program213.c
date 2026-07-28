#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool LinearSearch(int arr[], int iSize, int iNo)
{
    int iCnt=0;bool iFlag=false;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]==iNo)
        {
            iFlag=true;
            break;
        }
    }
      return iFlag;
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
    printf("enter the array elements:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    printf("enter the element you want to search:");
    scanf("%d", &iNo);
    iRet = LinearSearch(brr, iLength, iNo);
    if (iRet == true)
    {
        printf("element is the present in this array.......");
    }
    else
    {
        printf("element is not present in the array........");
    }
    free(brr);
    return 0;
}