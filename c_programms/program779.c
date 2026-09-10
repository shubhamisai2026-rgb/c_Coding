#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
    int fd=0;
    int iRet=0;
    char data[]="jay ganesh";
    fd=open("demo2.txt",O_RDWR | O_APPEND|O_CREAT,0666);
    if(fd==-1)
    {
        printf("file is unable to open %d\n",fd);
    }
    else
    {
        printf("file is successfully open %d",fd);
        iRet=write(fd,data,10);
        printf("number of byte for the file is %d",iRet);
    }
}