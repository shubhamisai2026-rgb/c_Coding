#include<stdio.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    int iRet=0;
    char data[]="jay ganesh";
    fd=open("marvellous.txt",O_RDWR | O_APPEND);
    if(fd==-1)
    {
        printf("file is unable to open %d\n",fd);
    }
    else
    {
        printf("file is successfully open %d",fd);
        iRet=write(fd,data,13);
        printf("number of byte for the file is %d",iRet);
    }
}