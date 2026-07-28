#include<stdio.h>
int main()
{
    int iValue1=0;int iValue2=0;
    printf("enter a number os rows:");
    scanf("%d",&iValue1);
    printf("enter a number of columns:");
    scanf("%d",&iValue2);
    display(iValue1,iValue2);
    return 0;
}
void display(int iRow,int iCol)
{
    int i=0;int j=0;int k=1;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++,k++)
        {
            if(k==10)
            {
                k=1;
            }
            printf("%d\t",k);
        }
        printf("\n");
    }
}