#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
void display(char s_name[], char d_name[])
{
    int s_file = 0;
    int d_file = 0;
    int iRet = 0;
    char Buffer[50] = {'\0'};

    s_file = open(s_name, O_RDONLY);
    if (s_file == -1)
    {
        printf("unable to open the source file......");
        return;
    }
    d_file = open(d_name, O_CREAT | O_RDWR | O_APPEND);
    if (d_file == -1)
    {
        printf("unble to open the destination file.....");
        return;
    }
    while ((iRet = read(s_file, Buffer, sizeof(Buffer)) )> 0)
    {
        write(d_file, Buffer, iRet);
        memset(Buffer, '\0', sizeof(Buffer));
    }
    close(s_file);
    close(d_file);
}
int main()
{
    char source[30] = {'\0'};
    char destination[30] = {'\0'};

    printf("enter the source file name:");
    scanf("%[^'\n']", source);
    getchar();

    printf("enter the destination file name:");
    scanf("%[^'\n']", destination);
    getchar();
    display(source, destination);
    return 0;
}