#include<stdio.h>
int division(int a,int b)
{
    if(b==0)
    {
        return -1;
    }
    int iAns=0;
    iAns=a/b;
    return iAns;
}
int main()
{
    int iValue1,iValue2;
    printf("enter the first and second value:");
    scanf("%d\n%d",&iValue1,&iValue2);
    int iRet=division(iValue1,iValue2);
    if(iRet==-1)
    {
        printf("segmentation fault will be create...");
    }
    else
    {
        printf("division of two numbers is:%d",iRet);
    }
    return 0;
}