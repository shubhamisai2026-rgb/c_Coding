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
        printf("file is a successfully open %d\n",fd);
        iRet=read(fd,data,13);
        printf("number of byte used for the read %d\n",iRet);
        printf("%s\n",data);

        memset(data,'\0',100);

        iRet=read(fd,data,12);
        printf("number of byte used for the read %d\n",iRet);
        printf("%s\n",data);

        close(fd);
        return 0;
    }

}