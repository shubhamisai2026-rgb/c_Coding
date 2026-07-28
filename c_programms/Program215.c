#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool LinearSearch(int arr[],int iSize,int iNo)
{
 int iCnt=0;bool iCount=0;
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
    if(arr[iCnt]==iNo)
    {
        iCount++;
        break;
    }
 }
 if(iCount==0)
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
 int *brr=NULL;int iLength=0;int iCnt=0;bool iRet=false;
 int iNo=0;
 printf("enter the size of array:");
 scanf("%d",&iLength);
 brr=(int*)malloc(sizeof(int)*iLength);
 printf("enter the array elements:");
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
    scanf("%d",&brr[iCnt]);
 }
 printf("enter the number for array search:");
 scanf("%d",&iNo);
 iRet=LinearSearch(brr,iLength,iNo);
 if(iRet==true)
 {
    printf("elemetn are present......");
 }
 else
 {
    printf("element are not a present......");
 }
 free(brr);
 return 0;
}