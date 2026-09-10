#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("%s\n",argv[1]);
    printf("%s\n",argv[0]);
    printf("%s\n",argv[2]);
    printf("Number of arguments are : %d\n",argc);

    return 0;
}