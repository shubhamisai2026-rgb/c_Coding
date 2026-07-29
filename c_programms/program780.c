#include <stdio.h>
#include <fcntl.h>
#include <String.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char data[] = "marvellous infosystem";
    fd = open("marvellous.txt", O_RDWR | O_APPEND);
    if (fd == -1)
    {
        printf("unable to open the file %d", fd);
    }
    else
    {
        printf("file id open successfully %d", fd);
        iRet = write(fd, data, strlen(data));
        printf("number of bytes used for the file %d", iRet);
        close(fd);
    }
    return 0;
}