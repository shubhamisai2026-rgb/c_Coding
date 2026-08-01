#include<stdio.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountCapital(char *fname)
{
   char Buffer[BUFFER_SIZE]={'\0'};
   int fd=0,iRet=0,iCount=0,i=0;

   fd=open(fname,O_RDONLY);

   if(fd==-1)
   {
    printf("unable to open the file\n");
    return;
   }

   while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
   {
     for(i=0;i<iRet;i++)
     {
        if(Buffer[i]>='A' && Buffer[i]<='Z')
        {
            iCount++;
        }
     }
    memset(Buffer,'\0',sizeof(Buffer));
   }
   return iCount;
}
int main()
{
    char fname[30]={'\0'};
    printf("enter the file name:\n");
    scanf("%[^'\n']s",fname);

    int iRet=CountCapital(fname);
    printf("number of capital characters are:%d\n",iRet);
    return 0;
}