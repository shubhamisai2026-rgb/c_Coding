#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#define BUFFERES_READER 100

int main()
{
    int fd=0;
    int iRet=0;
    char data[BUFFERES_READER]={'\0'};
    fd=open("marvellous.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file...%d",fd);
    }
    else
    {
        printf("the file successfully open ...%d",fd);
        lseek(fd,-20,2);

        iRet=read(fd,data,20);
        printf("number of bytes used for the open the file %d",iRet);
        printf("%s",data);

        close(fd);
        return 0;
    }
}