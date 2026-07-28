#include<stdio.h>
int main()
{
    int a=0;int b=1;int c=0;
     for(int i=0;i<=5;i++)
     {
        printf("%d\n",c);
        c=a+b;
        a=b;
        b=c;
        if(c==1)
        {
            printf("%d\n",c);
        }
     }
     return 0;
}