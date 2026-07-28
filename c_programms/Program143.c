#include<stdio.h>
#include<stdlib.h>
int main()
{
 int iLength=0;int iRet=0;int iCnt=0;
 //step 1:enter the length of the array
 printf("enter the length of the array are:");
 scanf("%d",&iLength);
 int *arr=NULL;
 //step 2:allowcate the memory
 arr=(int *)malloc(iLength*sizeof(int));
 //step 3:enter the elements of the array are
 printf("enter the elements os the array are:");
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
    scanf("%d",&arr[iCnt]);
 }
 //step 4:memory logic
 iRet=display(arr,iLength);
 printf("addition of the array element is:%d",iRet);
 //step 5:deallowcate the memory
 free(arr);
 return 0;
}
int display(int brr[],int iSize)
{
 int iCnt=0;int iSum=0;
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
    iSum=iSum+brr[iCnt];
 }
 return iSum;
}