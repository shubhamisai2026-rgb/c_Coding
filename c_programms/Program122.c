#include<stdio.h>
int main()
{
    int arr[5];int iCnt=0;
    printf("enter the elements are:");
    scanf("%d\n",&arr[0]);
    scanf("%d\n",&arr[1]);
    scanf("%d\n",&arr[2]);
    scanf("%d\n",&arr[3]);
    scanf("%d",&arr[4]);
    printf("the enter elements are:");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",arr[iCnt]);
    }
    return 0;
}