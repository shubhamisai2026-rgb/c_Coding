#include<stdio.h>
#include<stdlib.h>
int CountEven(int arr[],int iSize)
{
  int iCount=0;int iCnt=0;
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    if(arr[iCnt]%2==0)
    {
        iCount++;
    }
  }
  return iCount;
}
int main()
{
 int *brr=NULL;int iCnt=0;int iRet=0;int iSize=0;
 printf("enter the size of array:");
 scanf("%d",&iSize);
 brr=(int *)malloc(iSize*sizeof(int));
 printf("enter the array elements:");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
    scanf("%d",&brr[iCnt]);
 }
 iRet=CountEven(brr,iSize);
 printf("total even numbers in array:%d",iRet);
 free(brr);
 return 0;
}