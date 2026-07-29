#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd=0;
    int iRet=0;
    char data[100]={'\0'};
    fd=open("marvellous.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file %d\n",fd);
    }
    else
    {
        printf("file is successfully open %d\n",fd);
        iRet=read(fd,data,13);
        printf("number of bytes used for open the file %d\n",iRet);
        printf("%s",data);
      ///issue can create about buffer because previus buffer data not clean yet
       iRet=read(fd,data,1);
        printf("number of bytes used for open the file %d\n",iRet);
        printf("%s",data);

        close(fd);
        return 0;
    }
}