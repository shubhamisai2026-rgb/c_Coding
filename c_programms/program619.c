//////////////////////////////////////////////////////////////////////////////
//
//   Problem Statement:
//   Accept division of student from user and depends on the division
//   display exam timing.there are 4 divisions in school as A,B,C,D.Exam
//   of division A at 7 AM,B at 8:30 AM,C at 9.20 AM and D at 1.30 AM.
//   (Application should be case insensitive)
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
/////////////////////////////////////////////////////////////////////
//
// Function Name:StudentExamTime
// Input:        char
// Output:       char
// Description:  check the condition base on division
// Date:         09/0/7/2026
// Author:       shubham suresh isai
//
//////////////////////////////////////////////////////////////////////
void StudentExamTime(
                     char Cdiv
                    )
{
    if (Cdiv == 'a' || Cdiv == 'A')
    {
        printf("division A exam on 7am");
    }
    else if (Cdiv == 'b' || Cdiv == 'B')
    {
        printf("division B exam on 8:30am");
    }
    else if (Cdiv == 'c' || Cdiv == 'C')
    {
        printf("division C exam on 9:20am");
    }
    else if (Cdiv == 'd' || Cdiv == 'D')
    {
        printf("division D exam on 1:30am");
    }
    else
    {
        printf("invalid division.......");
    }
}

int main()
{
    char Cdiv = '\0';
    printf("enter a your division:\n");
    scanf("%c", &Cdiv);
    StudentExamTime(Cdiv);
    return 0;
}
