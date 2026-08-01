#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#define BUFFER_SIZE 1024

int display(char fname[])
{
    char Buffer[BUFFER_SIZE]={'\0'};
    int fd=0; int iRet=0; int iSize=0;
    fd=open(fname,O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file");
        return;
    }
    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
       iSize=iSize+iRet;
    }
    close(fd);
    return iSize;
}

int main()
{
    char fname[30]={'\0'};
    printf("enter a file name:");
    scanf("%[^'\n']s",fname);
    int iRet=display(fname);
    printf("size of the file is:%d",iRet);
    return 0;
}