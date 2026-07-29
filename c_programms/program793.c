#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#define BUFFERED_READER 1024
int main()
{
 char Buffer[BUFFERED_READER]={'\0'};
 int fd=0;
 int iRet=0;
 fd=open("program581.c",O_RDONLY);
 if(fd==-1)
 {
    printf("unable to open this file...");
 }
 while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
 {
    printf("%s",Buffer);
    memset(Buffer,'\0',sizeof(Buffer));
 }
 close(fd);
 return 0;
}