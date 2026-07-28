#include<stdio.h>
void nonfact(int iNo)
{
 int i=0;
 for(i=1;i<iNo;i++)
 {
    if(iNo%i!=0)
    {
printf("%d\n",i);
    }
 }

}
int main()
{
    int iValue=0;
    printf("enter a your number:");
    scanf("%d",&iValue);
    nonfact(iValue);
    return 0;
}