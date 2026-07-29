#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define BUFFERED_READER 100

int main()
{
    int fd=0;
    int iRet=0;
    char data[BUFFERED_READER]={'\0'};
    fd=open("marvellous.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file....%d",fd);
    }
    else
    {
        printf("file successfully open...%d",fd);
        lseek(fd,5,0);
        iRet=read(fd,data,13);
        printf("number of bytes used for the open the file...%d",iRet);
        printf("%s",data);
        return 0;
    }
}