///////////////////////////////////////////////////////////////////////////////////////////
////////////
//
//    Header Files Inclusion
//
///////////////////////////////////////////////////////////////////////////////////////////
////////////

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////
////////
//
//    User Defined Macros
//
////////////////////////////////////////////////////////////////////////////////////////////
/////////

#define MAXINODE 10
#define MAXFILESIZE 50
#define MAXOPENFILES 10

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULERFILE 1
#define SPECIALFILE 2

///////////////////////////////////////////////////////////////////////////////////////////////
//////////
//
//    User Defined Macros for error handling
//
////////////////////////////////////////////////////////////////////////////////////////////////
///////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

//////////////////////////////////////////////////////////////////////////////////////////////////
///////////
//
// structure Name:BootBlock
// Description: it holds the information to boot the operating system
//
//////////////////////////////////////////////////////////////////////////////////////////////////
///////////

struct BootBlock
{
    char Information[100];
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//////////
//
//  structure name: SuperBlock
//   Description  : It holds the information of complete file system
//
////////////////////////////////////////////////////////////////////////////////////////////////////
///////////

struct SuperBlock
{
    int TotalInodes;
    int freeInodes;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
/////////
//
//  structure name: Inode
//  Description: it holds the information of file
//
////////////////////////////////////////////////////////////////////////////////////////////////////
/////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int Permission;
    char *Buffer;
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode *PINODE;
typedef struct Inode **PPINODE;

//////////////////////////////////////////////////////////////////////////////////////////////////////
/////////
//
// Structure Name: FileTable
// Description: it holds information of opened files
//
////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////

#pragma pack(1)
struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE printnode;
};

typedef struct FileTable FILETABLE;
typedef struct FileTable *PFILETABLE;

////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////
//
//   structure Name:UAREA
//   Description: it holds information of process
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////
////////
//
//  Global variables used in the project
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareadobj;

PINODE head = NULL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////
//
//  Function name: InitialiseUareA
//  Description: it is used to initialise UREA
//  Author:shubham suresh isai
//  Date:31/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////

void InitialiseUAREA()
{
    int i = 0;
    strcpy(uareadobj.ProcessName, "myexe");
    for (i = 0; i < MAXOPENFILES; i++)
    {
        uareadobj.UFDT[i] = NULL;
    }
    printf("Marvellous CVFS:UAREA gets initialised succesfully\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////
//
//  Function Name: InitialiseSuperBlock()
//  Description:   It is used to initialise the super block
//      Author:   shubham suresh isai
//   Date:31/07/2026
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes=MAXINODE;
    superobj.freeInodes=MAXINODE;

    printf("Marvellous CVFS: Super Block gets initalised Successfully\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////
//
// Function Name: CreateDILB()
// Description:  in is used to creat linked list of inodes
// Author:        Shubham Suresh Isai
// Date  :     31/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////

void CreateDILB()
{
    PINODE temp=NULL;
    PINODE newnode=NULL;

    int i=0;
    temp=head;

    for(i=1;i<=MAXINODE;i++)
    {
        newnode=(PINODE)malloc(sizeof(INODE));
         
        newnode->InodeNumber=i;
        strcpy(newnode->FileName,"\0");
        newnode->FileSize=0;
        newnode->ActualFileSize=0;
        newnode->FileType=0;
        newnode->ReferenceCount=0;
        newnode->Permission=0;
        newnode->Buffer=NULL;

        if(temp==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }
    printf("Marvellous CVFS:DILB gets created successfully\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
////////
//
//  Function Name: StartAuxillaryDataInitialisation()
//   Description : it is used to call all such function which are used to
//                  initialise auxillary data
//     Author    : shubham suresh isai
//       Date    :  31/07/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////

void StartAuxillaryDataInitialisation()
{
    strcpy(bootobj.Information,"Booting of Marvellous CVFS is completed");
    printf("%s\n",bootobj.Information);
    InitialiseUAREA();
    InitialiseSuperBlock();
    CreateDILB();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////
//
//   Function Name : DisplayHelp()
//     Descriptin  : it is used to display help to
//      Author     : shubham suresh isai
//       date      :01/08/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////

void DisplayHelp()
{
    printf("-------------------------------------------------------------------\n");
    printf("---------Marvellous CVFS Help Page-----------------------------------");
    printf("----------------------------------------------------------------------");

    printf("man:it is used tho display the manual page\n");
    printf("clear:it is used to clear the terminal screen\n");
    printf("creat:it is used to creat  new regular file\n");
    printf("open:it is used to open a regular file\n");
    printf("close:it is used to close the regular file\n");
    printf("write:it is used to write the data into the file\n");
    printf("read:it is used to read the data from file\n");
    printf("stat:it is used to display statistical information of file\n");
    printf("unlink:it is used to delete the file\n");
    printf("exit:it is used to teerminate Marvellous CVFS\n");
    printf("---------------------------------------------------------------\n");

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////
//
//   Entry Point function of the CVFS project
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////


int main()
{
    char str[80]={'\0'};
    char command[5][20]={{'\0'}};
    int iCount=0; int iRet=0;

    StartAuxillaryDataInitialisation();

    printf("--------------------------------------------------------------------\n");
    printf(".....Marvellous CVFS started successfully------------------\n");
    printf("-------------------------------------------------------------------\n");

    // infinite Listening shell
    while(1)
    {
        fflush(stdin);
        strcpy(str,"");

        printf("\nMarvellous CVFS:>");
        fgets(str,sizeof(str),stdin);
 
        iCount=sscanf(str,"%s %s %s %s %s",command[0],command[1],command[2],command[3],command[4]);
        fflush(stdin);

        if(iCount==1)
        {
            if(strcmp(command[0],"exit")==0)
            {
                printf("thank you for usinf=g marvellous cvfs\n");
                printf("Deallocating all resources of marvellous cvfs\n");
                break;
            }
            else if(strcmp(command[0],"help")==0)
            {
                DisplayHelp();
            }
        }
        else if(iCount==2)
        {

        }
        else if(iCount==3)
        {

        }
        else if(iCount==4)
        {

        }
        else
        {
            printf("command not found\n");
            printf("please refer help option to get more information\n");
            printf("please refer manual page of command using main\n");
        }

    } //end of while
    return 0;
}