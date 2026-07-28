#include <stdio.h>
void DisplayAscii()
{
    int i = 0;
   
    for (i = 32; i < 128; i++)
    {
        printf("%d\t%c\t%X", i,(char)i, i);
   
        printf("\n");
    }
}
int main()
{
    DisplayAscii();
    return 0;
}