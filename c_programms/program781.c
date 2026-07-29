#include<stdio.h>
#include<fcntl.h>
#include<String.h>

int main()
{
    int fd=0;
    int iRet=0;
    char data[100]={'\0'};
    fd=open("marvellous.txt",O_RDONLY);
    if(fd==-1)
    {  
       printf("unable to open the file %d",fd);
    }
    else
    {
        printf("file is successfully open %d",fd);
        iRet=read(fd,data,13);
        printf("number of bytes used :%d",iRet);
        printf("%s",data);
        close(fd);
    }
}