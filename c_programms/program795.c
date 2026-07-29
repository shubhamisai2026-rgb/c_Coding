#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#define Buffered_size 1024
int main()
{
    char Buffer[Buffered_size]={'\0'};
    int fd=0;
    int iRet=0;
    fd=open("program582.c",O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the this file....");
        return -1;
    }
    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        printf("%s",Buffer);
        memset(Buffer,'\0',sizeof(Buffer));
    }
    return 0;
}