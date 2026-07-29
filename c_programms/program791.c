#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#define BUFFERED_READER 100

int main()
{
    char Buffer[BUFFERED_READER]={'\0'};
    int fd=0;
    int iRet=0;
    fd=open("marvellous.txt",O_RDONLY);
    while((iRet=read(fd,Buffer,sizeof(Buffer)-1))!=0)
    {
      printf("%s",Buffer);
      memset(Buffer,'\0',sizeof(Buffer));
    }
    close(fd);
    return 0;
}