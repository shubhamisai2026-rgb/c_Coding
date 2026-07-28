#include<stdio.h>
void accept(int iNo)
{
 int iCnt=0;
 for(iCnt=1;iCnt<=iNo;iCnt++)
 {
    printf("*\n");
 }

}
int main()
{
int iValue;
printf("enter a your value:\n");
scanf("%d",&iValue);
accept(iValue);
return 0;
}