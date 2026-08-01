#include<stdio.h>
#include<fcntl.h>
int main()
{
  int fd=0;
  fd=creat("file.txt",0777);
  if(fd==-1)
  {
    printf("file not created");
  }
  else
  {
    printf("file created successfully");
  }
  close(fd);

}