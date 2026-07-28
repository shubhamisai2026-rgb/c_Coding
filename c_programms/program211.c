#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool LinearSearch(int arr[], int iSize)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == 2)
        {
            return true; //bad programming
        }
         
    }
    return false;
}
int main()
{
    int *brr = 0;
    int iLength = 0;
    int iCnt = 0;
    bool iRet = false;
    printf("enter the size of array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(sizeof(int) * iLength);
    printf("enter the elements of array:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &brr[iCnt]);
    }
    iRet = LinearSearch(brr, iLength);
    if (iRet == true)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
    free(brr);
    return 0;
}