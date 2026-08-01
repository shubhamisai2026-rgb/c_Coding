#include<stdio.h>
#include<fcntl.h>
int main()
{
  int fd=0;
  fd=creat("demo.txt ",O_CREAT);
  if(fd==-1)
  {
    printf("file not created");
  }
  else
  {
    printf("file created successfully %d",fd);
  }
  close(fd);

}