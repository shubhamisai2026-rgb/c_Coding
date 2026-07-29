#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define BUFFER_READER 100

int main()
{
    int fd=0;
    int iRet=0;
    char data[BUFFER_READER]={'\0'};
    fd=open("marvellous.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file %d",fd);
    }
    else
    {
        printf("%d file successfully open",fd);
        iRet=read(fd,data,13);
        printf("number of bytes used for read the file......%d",iRet);
        printf("%s",data);

        memset(data,'\0',sizeof(data));

        iRet=read(fd,data,13);
        printf("number of bytes used for read the file......%d",iRet);
        printf("%s",data);

        close(fd);
        return 0;

    }
}