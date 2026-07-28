#include<stdio.h>
int main()
{
    int iCnt=0;
    int arr[5]={0};
    printf("enter the elements:");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&arr[iCnt]);
    }
    printf("elements of the array is:");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",arr[iCnt]);
    }
    return 0;
}