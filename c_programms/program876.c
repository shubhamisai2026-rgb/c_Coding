#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    #ifdef _WIN32
        system("dir");
    #else
        system("ls");
    #endif
    return 0;
}