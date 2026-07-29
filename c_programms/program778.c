#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
    int fd=0;
    int iRet=0;
    fd=open("marvellous.txt",O_RDWR | O_APPEND |O_CREAT,0666);
    if(fd==-1)
    {
        printf("unable to open the file");
    }
    else
    {
        printf("file gets successfully opened %d",fd);
        iRet=write(fd,"jav ganesh",13);
        printf("number of bytes for the file is %d",iRet);
        close(fd);
    }
    return 0;
}