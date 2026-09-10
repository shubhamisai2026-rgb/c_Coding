#include<stdio.h>

// ./Myexe 10 11

int main(int argc, char *argv[])
{
    int Ans = 0;

    if(argc != 3)
    {
        printf("Invalid number of arguments\n");
        return -1;
    }  
    
    Ans = (int)argv[1] + (int)argv[2];    // Warning

    printf("Addition is : %d",Ans);

    return 0;
} 