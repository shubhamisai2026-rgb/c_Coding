#include <stdio.h>
int main()
{
    int i = 0;
    int b = 1;
    int c = 0;
    int a = 0;
   
    for (i = 0; i <= 5; i++)
    {

        printf("%d\n", c);
        if(c==1)
        {
        printf("%d\n",b);
        }
        c = a + b;
        a = b;
        b = c;
    }
}