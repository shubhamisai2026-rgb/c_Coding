#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#define BUFFERED_READER 100

int main()
{
    int fd=0;
    int iRet=0;
    char data[BUFFERED_READER]={'\0'};
     fd=open("marvellous.txt",O_RDONLY);
     if(fd==-1)
     {
        printf("unable to open the file...%d",fd);
     }
     else
     {
        printf("%d\n file successfully open",fd);
        lseek(fd,5,0);
        iRet=read(fd,data,13);
        printf("number of size use for the read the file %d\n",iRet);
        printf("%s\n",data);
         memset(data,'\0',sizeof(data));
         lseek(fd,5,1);
         iRet=read(fd,data,13);
         printf("number of size used for the file %d\n",iRet);
         printf("%s\n",data);
         close(fd);
         return 0;
     }
}
