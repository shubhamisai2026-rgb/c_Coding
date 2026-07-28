#include<stdio.h>
void update(int arr[],int iSize)
{
 int iCnt=0;
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
    arr[iCnt]++;
 }
}
int main()
{
    int arr[5]={10,20,30,40,50};
    int iCnt=0;
    printf("elements of the array is:");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d",arr[iCnt]);
    }
    update(arr,5);
    printf("updation of the array element is:");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d",arr[iCnt]);
    }
    return 0;
}