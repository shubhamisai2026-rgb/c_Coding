#include<stdio.h>
#include<fcntl.h>
#include<String.h>

int main()
{
    int fd=0;
    int iRet=0;
    char data[100]={'\0'};
    char datax[100]={'\0'};
    fd=open("marvellous.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("file is unable to open");
    }
    else
    {
        printf("file successfully open...%d",fd);
        iRet=read(fd,data,13);
        printf("number of bytes return by the file %d",iRet);
        printf("%s",data);

        iRet=read(fd,datax,3);
        printf("number of bytes return by the file %d",iRet);
        printf("%s",datax);

        close(fd);
    }
}