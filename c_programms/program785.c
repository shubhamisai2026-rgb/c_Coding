#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
    int fd=0;
    int iRet=0;
    char data[100]={'\0'};
    fd=open("marvellous.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file....");
    }
    else
    {
        printf("file not open the successfully open %d",fd);
        iRet=read(fd,data,13);
        printf("number of bytes used for the read the file..%d",iRet);
        printf("%s",data);

        memset(data,'\0',sizeof(data));

       iRet=read(fd,data,12);
       printf("number of bytes used for the read the file..%d",iRet);
       printf("%s",data);

       close(fd);
       return 0;
    }
}