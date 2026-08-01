#include<stdio.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

int CountCapital(char *fname)
{
   char Buffer[BUFFER_SIZE]={'\0'};
   int fd=0,iRet=0,iCount=0,i=0;

   fd=open(fname,O_RDONLY);

   if(fd==-1)
   {
     return ERR_OPEN;
   }


   while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
   {
     for(i=0;i<iRet;i++)
     {
        if(Buffer[i]>='a' && Buffer[i]<='z')
        {
            iCount++;
        }
     }
    memset(Buffer,'\0',sizeof(Buffer));
   }
   close(fd);
   return iCount;
}
int main()
{
    char fname[30]={'\0'};
    printf("enter the file name:\n");
    scanf("%[^'\n']s",fname);

    int iRet=CountCapital(fname);
    if(iRet==ERR_OPEN)
    {
        printf("error");
    }
    else
    {
    printf("number of small characters are:%d\n",iRet);
    }
    return 0;
}