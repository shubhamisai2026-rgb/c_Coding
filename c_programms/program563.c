#include<stdio.h>
int main()
{
    int iValue1=0;int iValue2=0;
    printf("enter a number of rows:");
    scanf("%d",&iValue1);
    printf("enter a number of columns:");
    scanf("%d",&iValue2);
    display(iValue1,iValue2);
    return 0;
}
void display(int iRow,int iCol)
{
    int i=0;int j=0;
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<=iCol;j++)
        {
            if((i==0)||(i==iRow-1))
            {
                printf("*\t");
            }                 
            else if((j==0)||(j==iCol))
            {
                printf("*\t");
            }    
            else
            {
                printf("@\t");
            }                                                                                                   
        }
        printf("\n");
    }
}