#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    #ifdef _WIN32
       printf("project is running on windows platform\n");
    #else
       printf("project is running on Linux / MacOS platform\n");
    #endif

    return 0;
}