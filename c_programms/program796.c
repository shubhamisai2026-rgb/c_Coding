#include <stdio.h>
#include <fcntl.h>
#include <string.h>
int main()
{
    char Buffer[100] = {'\0'};
    int fd = 0;
    int iRet = 0;
    fd = open("program594.c", O_RDONLY);
    if (fd == -1)
    {
        printf("file is unable to open...");
        return -1;
    }
    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        write(1, Buffer, iRet);
        memset(Buffer, '\0', sizeof(Buffer));
    }
    close(fd);
    return 0;
}
