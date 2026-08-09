//////////////////////////////////////////////////////
//
//  Header Files Inclusion
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

//////////////////////////////////////////////////////
//
//  User Defined Macros
//
//////////////////////////////////////////////////////

#define MAXINODE 5
#define MAXFILESIZE 50
#define MAXOPENFILES 5

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2

//////////////////////////////////////////////////////
//
//  Error Handling Macros
//
//////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1
#define ERR_NO_INODES -2
#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4
#define ERR_PERMISSION_DENIED -5
#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7
#define ERR_MAX_FILES_OPEN -8

//////////////////////////////////////////////////////
//
//  BootBlock
//
//////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

//////////////////////////////////////////////////////
//
//  SuperBlock
//
//////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

//////////////////////////////////////////////////////
//
//  Inode
//
//////////////////////////////////////////////////////

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
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

//////////////////////////////////////////////////////
//
//  FileTable
//
//////////////////////////////////////////////////////

#pragma pack(1)

struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
};

typedef struct FileTable FILETABLE;
typedef struct FileTable* PFILETABLE;

//////////////////////////////////////////////////////
//
//  UAREA
//
//////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

//////////////////////////////////////////////////////
//
//  Global Variables
//
//////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;

//////////////////////////////////////////////////////
//
//  Initialise UAREA
//
//////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0;

    strcpy(uareaobj.ProcessName, "Myexe");

    for(i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA gets initialised successfully\n");
}

//////////////////////////////////////////////////////
//
//  Initialise SuperBlock
//
//////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super Block gets initialised successfully\n");
}

//////////////////////////////////////////////////////
//
//  Create DILB
//
//////////////////////////////////////////////////////

void CreateDILB()
{
    PINODE temp = NULL;
    PINODE newn = NULL;

    int i = 0;

    temp = head;

    for(i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        if(newn == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }

        newn->InodeNumber = i;

        strcpy(newn->FileName, "");

        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->FileType = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;

        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVFS : DILB gets created successfully\n");
}

//////////////////////////////////////////////////////
//
//  Start Auxiliary Data Initialisation
//
//////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    strcpy(
        bootobj.Information,
        "Booting process of Marvellous CVFS is completed"
    );

    printf("%s\n", bootobj.Information);

    InitialiseUAREA();
    InitialiseSuperBlock();
    CreateDILB();
}

//////////////////////////////////////////////////////
//
//  Display Help
//
//////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("-----------------------------------------------\n");
    printf("---------- Marvellous CVFS Help Page ----------\n");
    printf("-----------------------------------------------\n");

    printf("man : Display manual page\n");
    printf("clear : Clear terminal screen\n");
    printf("creat : Create new regular file\n");
    printf("open : Open existing regular file\n");
    printf("close : Close opened regular file\n");
    printf("write : Write data into file\n");
    printf("read : Read data from file\n");
    printf("stat : Display statistical information\n");
    printf("ls : Display all files\n");
    printf("unlink : Delete file\n");
    printf("exit : Terminate CVFS\n");

    printf("-----------------------------------------------\n");
}

//////////////////////////////////////////////////////
//
//  Man Page
//
//////////////////////////////////////////////////////

void ManPageDisplay(char Name[])
{
    if(strcmp(Name, "exit") == 0)
    {
        printf("About : Terminate the project\n");
        printf("Usage : exit\n");
    }
    else if(strcmp(Name, "ls") == 0)
    {
        printf("About : List all files\n");
        printf("Usage : ls\n");
    }
    else if(strcmp(Name, "clear") == 0)
    {
        printf("About : Clear terminal\n");
        printf("Usage : clear\n");
    }
    else if(strcmp(Name, "creat") == 0)
    {
        printf("About : Create new file\n");
        printf("Usage : creat File_name Permission\n");

        printf("Permission : Read -> 1\n");
        printf("Permission : Write -> 2\n");
        printf("Permission : Read + Write -> 3\n");
    }
    else if(strcmp(Name, "open") == 0)
    {
        printf("About : Open existing file\n");
        printf("Usage : open File_name Mode\n");

        printf("Mode : Read -> 1\n");
        printf("Mode : Write -> 2\n");
        printf("Mode : Read + Write -> 3\n");
    }
    else if(strcmp(Name, "close") == 0)
    {
        printf("About : Close opened file\n");
        printf("Usage : close File_Descriptor\n");
    }
    else if(strcmp(Name, "write") == 0)
    {
        printf("About : Write data into file\n");
        printf("Usage : write File_Descriptor\n");
    }
    else if(strcmp(Name, "read") == 0)
    {
        printf("About : Read data from file\n");
        printf("Usage : read File_Descriptor Size\n");
    }
    else if(strcmp(Name, "unlink") == 0)
    {
        printf("About : Delete existing file\n");
        printf("Usage : unlink File_name\n");
    }
    else if(strcmp(Name, "stat") == 0)
    {
        printf("About : Display information of file\n");
        printf("Usage : stat File_name\n");
    }
    else
    {
        printf("No manual entry found for %s\n", Name);
    }
}

//////////////////////////////////////////////////////
//
//  Check File Exists
//
//////////////////////////////////////////////////////

bool IsFileExist(char name[])
{
    PINODE temp = head;

    while(temp != NULL)
    {
        if(strcmp(temp->FileName, name) == 0)
        {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

//////////////////////////////////////////////////////
//
//  Create File
//
//////////////////////////////////////////////////////

int CreateFile(char name[], int permission)
{
    int i = 0;

    PINODE temp = head;

    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;
    }

    if(permission < 1 || permission > 3)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(IsFileExist(name) == true)
    {
        return ERR_FILE_ALREADY_EXIST;
    }

    while(temp != NULL)
    {
        if(temp->FileType == 0)
        {
            break;
        }

        temp = temp->next;
    }

    if(temp == NULL)
    {
        return ERR_NO_INODES;
    }

    //////////////////////////////////////////////////////
    // Find free FD
    //////////////////////////////////////////////////////

    for(i = 3; i < MAXOPENFILES; i++)
    {
        if(uareaobj.UFDT[i] == NULL)
        {
            break;
        }
    }

    if(i == MAXOPENFILES)
    {
        return ERR_MAX_FILES_OPEN;
    }

    //////////////////////////////////////////////////////
    // Allocate FileTable
    //////////////////////////////////////////////////////

    uareaobj.UFDT[i] =
        (PFILETABLE)malloc(sizeof(FILETABLE));

    if(uareaobj.UFDT[i] == NULL)
    {
        return ERR_INVALID_PARAMETER;
    }

    //////////////////////////////////////////////////////
    // Initialise FileTable
    //////////////////////////////////////////////////////

    uareaobj.UFDT[i]->ReadOffset = 0;
    uareaobj.UFDT[i]->WriteOffset = 0;
    uareaobj.UFDT[i]->Mode = permission;
    uareaobj.UFDT[i]->ptrinode = temp;

    //////////////////////////////////////////////////////
    // Initialise Inode
    //////////////////////////////////////////////////////

    strcpy(temp->FileName, name);

    temp->FileSize = MAXFILESIZE;
    temp->ActualFileSize = 0;
    temp->FileType = REGULARFILE;
    temp->ReferenceCount = 1;
    temp->Permission = permission;

    //////////////////////////////////////////////////////
    // Allocate Data Block
    //////////////////////////////////////////////////////

    temp->Buffer = (char *)malloc(MAXFILESIZE + 1);

    if(temp->Buffer == NULL)
    {
        free(uareaobj.UFDT[i]);
        uareaobj.UFDT[i] = NULL;

        return ERR_INSUFFICIENT_SPACE;
    }

    memset(temp->Buffer, '\0', MAXFILESIZE + 1);

    superobj.FreeInodes--;

    return i;
}

//////////////////////////////////////////////////////
//
//  Open File
//
//////////////////////////////////////////////////////

int OpenFile(char name[], int mode)
{
    int i = 0;
    PINODE temp = head;

    //////////////////////////////////////////////////////
    // Validate mode
    //////////////////////////////////////////////////////

    if(mode < READ || mode > (READ + WRITE))
    {
        return ERR_INVALID_PARAMETER;
    }

    //////////////////////////////////////////////////////
    // Search file
    //////////////////////////////////////////////////////

    while(temp != NULL)
    {
        if(strcmp(temp->FileName, name) == 0)
        {
            break;
        }

        temp = temp->next;
    }

    if(temp == NULL)
    {
        return ERR_FILE_NOT_EXIST;
    }

    //////////////////////////////////////////////////////
    // Check permission
    //////////////////////////////////////////////////////

    if((mode == READ) &&
       ((temp->Permission & READ) == 0))
    {
        return ERR_PERMISSION_DENIED;
    }

    if((mode == WRITE) &&
       ((temp->Permission & WRITE) == 0))
    {
        return ERR_PERMISSION_DENIED;
    }

    if((mode == (READ + WRITE)) &&
       ((temp->Permission & READ) == 0 ||
        (temp->Permission & WRITE) == 0))
    {
        return ERR_PERMISSION_DENIED;
    }

    //////////////////////////////////////////////////////
    // Find free UFDT entry
    //////////////////////////////////////////////////////

    for(i = 3; i < MAXOPENFILES; i++)
    {
        if(uareaobj.UFDT[i] == NULL)
        {
            break;
        }
    }

    if(i == MAXOPENFILES)
    {
        return ERR_MAX_FILES_OPEN;
    }

    //////////////////////////////////////////////////////
    // Allocate FileTable
    //////////////////////////////////////////////////////

    uareaobj.UFDT[i] =
        (PFILETABLE)malloc(sizeof(FILETABLE));

    if(uareaobj.UFDT[i] == NULL)
    {
        return ERR_INSUFFICIENT_SPACE;
    }

    //////////////////////////////////////////////////////
    // Initialise FileTable
    //////////////////////////////////////////////////////

    uareaobj.UFDT[i]->ReadOffset = 0;
    uareaobj.UFDT[i]->WriteOffset = 0;
    uareaobj.UFDT[i]->Mode = mode;
    uareaobj.UFDT[i]->ptrinode = temp;

    //////////////////////////////////////////////////////
    // Increase reference count
    //////////////////////////////////////////////////////

    temp->ReferenceCount++;

    return i;
}

//////////////////////////////////////////////////////
//
//  Close File
//
//////////////////////////////////////////////////////

int CloseFile(int fd)
{
    PINODE temp = NULL;

    if(fd < 0 || fd >= MAXOPENFILES)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(uareaobj.UFDT[fd] == NULL)
    {
        return ERR_FILE_NOT_EXIST;
    }

    temp = uareaobj.UFDT[fd]->ptrinode;

    //////////////////////////////////////////////////////
    // Decrease reference count
    //////////////////////////////////////////////////////

    if(temp->ReferenceCount > 0)
    {
        temp->ReferenceCount--;
    }

    //////////////////////////////////////////////////////
    // Free FileTable
    //////////////////////////////////////////////////////

    free(uareaobj.UFDT[fd]);

    uareaobj.UFDT[fd] = NULL;

    return EXECUTE_SUCCESS;
}

//////////////////////////////////////////////////////
//
//  List Files
//
//////////////////////////////////////////////////////

void LsFile()
{
    PINODE temp = head;

    printf("-----------------------------------------------\n");
    printf("------ Marvellous CVFS Files Information ------\n");
    printf("-----------------------------------------------\n");

    while(temp != NULL)
    {
        if(temp->FileType != 0)
        {
            printf("%s\n", temp->FileName);
        }

        temp = temp->next;
    }
}

//////////////////////////////////////////////////////
//
//  List All File Details
//
//////////////////////////////////////////////////////

void LsFile_All()
{
    PINODE temp = head;

    printf("-----------------------------------------------\n");
    printf("------ Marvellous CVFS Files Information ------\n");
    printf("-----------------------------------------------\n");

    while(temp != NULL)
    {
        if(temp->FileType != 0)
        {
            printf(
                "%s %d %d\n",
                temp->FileName,
                temp->InodeNumber,
                temp->ActualFileSize
            );
        }

        temp = temp->next;
    }
}

//////////////////////////////////////////////////////
//
//  Stat File
//
//////////////////////////////////////////////////////

int stat_file(char name[])
{
    PINODE temp = NULL;

    if(IsFileExist(name) == false)
    {
        return ERR_FILE_NOT_EXIST;
    }

    temp = head;

    while(temp != NULL)
    {
        if(strcmp(temp->FileName, name) == 0)
        {
            printf("-----------------------------------------------\n");
            printf("------- Statistical information of File -------\n");
            printf("-----------------------------------------------\n");

            printf("File name : %s\n", temp->FileName);
            printf("Inode number : %d\n", temp->InodeNumber);
            printf("File size : %d\n", temp->FileSize);
            printf("Actual File size : %d\n", temp->ActualFileSize);
            printf("Reference Count : %d\n", temp->ReferenceCount);

            if(temp->Permission == READ)
            {
                printf("File Permission : Read Only\n");
            }
            else if(temp->Permission == WRITE)
            {
                printf("File Permission : Write Only\n");
            }
            else if(temp->Permission == (READ + WRITE))
            {
                printf("File Permission : Read + Write\n");
            }

            if(temp->FileType == REGULARFILE)
            {
                printf("File type : Regular File\n");
            }
            else if(temp->FileType == SPECIALFILE)
            {
                printf("File type : Special File\n");
            }

            printf("-----------------------------------------------\n");

            return EXECUTE_SUCCESS;
        }

        temp = temp->next;
    }

    return ERR_FILE_NOT_EXIST;
}

//////////////////////////////////////////////////////
//
//  Unlink File
//
//////////////////////////////////////////////////////

int unlink_file(char name[])
{
    int i = 0;

    PINODE temp = head;

    if(IsFileExist(name) == false)
    {
        return ERR_FILE_NOT_EXIST;
    }

    //////////////////////////////////////////////////////
    // Find inode
    //////////////////////////////////////////////////////

    while(temp != NULL)
    {
        if(strcmp(temp->FileName, name) == 0)
        {
            break;
        }

        temp = temp->next;
    }

    if(temp == NULL)
    {
        return ERR_FILE_NOT_EXIST;
    }

    //////////////////////////////////////////////////////
    // Check if file is open
    //////////////////////////////////////////////////////

    for(i = 0; i < MAXOPENFILES; i++)
    {
        if(uareaobj.UFDT[i] != NULL &&
           uareaobj.UFDT[i]->ptrinode == temp)
        {
            free(uareaobj.UFDT[i]);

            uareaobj.UFDT[i] = NULL;
        }
    }

    //////////////////////////////////////////////////////
    // Free buffer
    //////////////////////////////////////////////////////

    if(temp->Buffer != NULL)
    {
        free(temp->Buffer);
        temp->Buffer = NULL;
    }

    //////////////////////////////////////////////////////
    // Reset inode
    //////////////////////////////////////////////////////

    strcpy(temp->FileName, "");

    temp->FileSize = 0;
    temp->ActualFileSize = 0;
    temp->FileType = 0;
    temp->Permission = 0;
    temp->ReferenceCount = 0;

    superobj.FreeInodes++;

    return EXECUTE_SUCCESS;
}

//////////////////////////////////////////////////////
//
//  Write File
//
//////////////////////////////////////////////////////

int write_file(
                int fd,
                char *data,
                int size
              )
{
    if(fd < 0 || fd >= MAXOPENFILES)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(uareaobj.UFDT[fd] == NULL)
    {
        return ERR_FILE_NOT_EXIST;
    }

    if(data == NULL || size < 0)
    {
        return ERR_INVALID_PARAMETER;
    }

    //////////////////////////////////////////////////////
    // Check write permission
    //////////////////////////////////////////////////////

    if((uareaobj.UFDT[fd]->Mode & WRITE) == 0)
    {
        return ERR_PERMISSION_DENIED;
    }

    //////////////////////////////////////////////////////
    // Check file permission
    //////////////////////////////////////////////////////

    if((uareaobj.UFDT[fd]->ptrinode->Permission & WRITE) == 0)
    {
        return ERR_PERMISSION_DENIED;
    }

    //////////////////////////////////////////////////////
    // Check available space
    //////////////////////////////////////////////////////

    if(
        (MAXFILESIZE -
         uareaobj.UFDT[fd]->WriteOffset) < size
      )
    {
        return ERR_INSUFFICIENT_SPACE;
    }

    //////////////////////////////////////////////////////
    // Write data
    //////////////////////////////////////////////////////

    memcpy(
        uareaobj.UFDT[fd]->ptrinode->Buffer +
        uareaobj.UFDT[fd]->WriteOffset,
        data,
        size
    );

    //////////////////////////////////////////////////////
    // Update offset
    //////////////////////////////////////////////////////

    uareaobj.UFDT[fd]->WriteOffset += size;

    //////////////////////////////////////////////////////
    // Update actual file size
    //////////////////////////////////////////////////////

    uareaobj.UFDT[fd]->ptrinode->ActualFileSize =
        uareaobj.UFDT[fd]->WriteOffset;

    //////////////////////////////////////////////////////
    // Add null terminator
    //////////////////////////////////////////////////////

    uareaobj.UFDT[fd]->ptrinode->Buffer[
        uareaobj.UFDT[fd]->ptrinode->ActualFileSize
    ] = '\0';

    return size;
}

//////////////////////////////////////////////////////
//
//  Read File
//
//////////////////////////////////////////////////////

int read_file(
                int fd,
                char *data,
                int size
             )
{
    int remaining = 0;

    if(fd < 0 || fd >= MAXOPENFILES)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(uareaobj.UFDT[fd] == NULL)
    {
        return ERR_FILE_NOT_EXIST;
    }

    if(data == NULL || size <= 0)
    {
        return ERR_INVALID_PARAMETER;
    }

    //////////////////////////////////////////////////////
    // Check read mode
    //////////////////////////////////////////////////////

    if((uareaobj.UFDT[fd]->Mode & READ) == 0)
    {
        return ERR_PERMISSION_DENIED;
    }

    //////////////////////////////////////////////////////
    // Check file permission
    //////////////////////////////////////////////////////

    if((uareaobj.UFDT[fd]->ptrinode->Permission & READ) == 0)
    {
        return ERR_PERMISSION_DENIED;
    }

    //////////////////////////////////////////////////////
    // Calculate remaining data
    //////////////////////////////////////////////////////

    remaining =
        uareaobj.UFDT[fd]->ptrinode->ActualFileSize -
        uareaobj.UFDT[fd]->ReadOffset;

    //////////////////////////////////////////////////////
    // No data available
    //////////////////////////////////////////////////////

    if(remaining <= 0)
    {
        return ERR_INSUFFICIENT_DATA;
    }

    //////////////////////////////////////////////////////
    // If requested size is greater than remaining data
    //////////////////////////////////////////////////////

    if(size > remaining)
    {
        size = remaining;
    }

    //////////////////////////////////////////////////////
    // Read data
    //////////////////////////////////////////////////////

    memcpy(
        data,
        uareaobj.UFDT[fd]->ptrinode->Buffer +
        uareaobj.UFDT[fd]->ReadOffset,
        size
    );

    //////////////////////////////////////////////////////
    // Add null terminator
    //////////////////////////////////////////////////////

    data[size] = '\0';

    //////////////////////////////////////////////////////
    // Update read offset
    //////////////////////////////////////////////////////

    uareaobj.UFDT[fd]->ReadOffset += size;

    return size;
}

//////////////////////////////////////////////////////
//
//  Cleanup Resources
//
//////////////////////////////////////////////////////

void CleanupResources()
{
    int i = 0;

    PINODE temp = head;
    PINODE next = NULL;

    //////////////////////////////////////////////////////
    // Free UFDT
    //////////////////////////////////////////////////////

    for(i = 0; i < MAXOPENFILES; i++)
    {
        if(uareaobj.UFDT[i] != NULL)
        {
            free(uareaobj.UFDT[i]);
            uareaobj.UFDT[i] = NULL;
        }
    }

    //////////////////////////////////////////////////////
    // Free all inodes
    //////////////////////////////////////////////////////

    while(temp != NULL)
    {
        next = temp->next;

        if(temp->Buffer != NULL)
        {
            free(temp->Buffer);
        }

        free(temp);

        temp = next;
    }

    head = NULL;
}

//////////////////////////////////////////////////////
//
//  Main
//
//////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};

    char Command[5][20] = {{'\0'}};

    char InputBuffer[MAXFILESIZE + 1] = {'\0'};

    int iCount = 0;
    int iRet = 0;
    int size = 0;

    char *EmptyBuffer = NULL;

    //////////////////////////////////////////////////////
    // Initialise CVFS
    //////////////////////////////////////////////////////

    StartAuxillaryDataInitialisation();

    printf("-----------------------------------------------\n");
    printf("----- Marvellous CVFS started successfully ----\n");
    printf("-----------------------------------------------\n");

    //////////////////////////////////////////////////////
    // Infinite Shell
    //////////////////////////////////////////////////////

    while(1)
    {
        strcpy(str, "");

        memset(Command, 0, sizeof(Command));

        printf("\nMarvellous CVFS : > ");

        fgets(str, sizeof(str), stdin);

        iCount = sscanf(
                    str,
                    "%s %s %s %s %s",
                    Command[0],
                    Command[1],
                    Command[2],
                    Command[3],
                    Command[4]
                 );

        //////////////////////////////////////////////////////
        // One argument
        //////////////////////////////////////////////////////

        if(iCount == 1)
        {
            //////////////////////////////////////////////////////
            // exit
            //////////////////////////////////////////////////////

            if(strcmp(Command[0], "exit") == 0)
            {
                printf("\nThank you for using Marvellous CVFS\n");
                printf("Deallocating all resources...\n");

                CleanupResources();

                break;
            }

            //////////////////////////////////////////////////////
            // help
            //////////////////////////////////////////////////////

            else if(strcmp(Command[0], "help") == 0)
            {
                DisplayHelp();
            }

            //////////////////////////////////////////////////////
            // clear
            //////////////////////////////////////////////////////

            else if(strcmp(Command[0], "clear") == 0)
            {
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
            }

            //////////////////////////////////////////////////////
            // ls
            //////////////////////////////////////////////////////

            else if(strcmp(Command[0], "ls") == 0)
            {
                LsFile();
            }

            else
            {
                printf("Command not found\n");
                printf("Please refer help option\n");
            }
        }

        //////////////////////////////////////////////////////
        // Two arguments
        //////////////////////////////////////////////////////

        else if(iCount == 2)
        {
            //////////////////////////////////////////////////////
            // man
            //////////////////////////////////////////////////////

            if(strcmp(Command[0], "man") == 0)
            {
                ManPageDisplay(Command[1]);
            }

            //////////////////////////////////////////////////////
            // ls -a
            //////////////////////////////////////////////////////

            else if(
                    strcmp(Command[0], "ls") == 0 &&
                    strcmp(Command[1], "-a") == 0
                   )
            {
                LsFile_All();
            }

            //////////////////////////////////////////////////////
            // stat
            //////////////////////////////////////////////////////

            else if(strcmp(Command[0], "stat") == 0)
            {
                iRet = stat_file(Command[1]);

                if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File does not exist\n");
                }
            }

            //////////////////////////////////////////////////////
            // unlink
            //////////////////////////////////////////////////////

            else if(strcmp(Command[0], "unlink") == 0)
            {
                iRet = unlink_file(Command[1]);

                if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File does not exist\n");
                }
                else
                {
                    printf("File successfully deleted\n");
                }
            }

            //////////////////////////////////////////////////////
            // write
            //////////////////////////////////////////////////////

            else if(strcmp(Command[0], "write") == 0)
            {
                int fd = atoi(Command[1]);

                printf("Enter the data that you want to write:\n");

                fgets(InputBuffer, MAXFILESIZE, stdin);

                size = strlen(InputBuffer);

                if(size > 0 && InputBuffer[size - 1] == '\n')
                {
                    InputBuffer[size - 1] = '\0';
                    size--;
                }

                iRet = write_file(
                            fd,
                            InputBuffer,
                            size
                       );

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid parameters\n");
                }
                else if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File does not exist\n");
                }
                else if(iRet == ERR_PERMISSION_DENIED)
                {
                    printf("Error : Permission denied\n");
                }
                else if(iRet == ERR_INSUFFICIENT_SPACE)
                {
                    printf("Error : Insufficient space\n");
                }
                else
                {
                    printf(
                        "%d bytes successfully written\n",
                        iRet
                    );
                }
            }

            //////////////////////////////////////////////////////
            // close
            //////////////////////////////////////////////////////

            else if(strcmp(Command[0], "close") == 0)
            {
                iRet = CloseFile(atoi(Command[1]));

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid file descriptor\n");
                }
                else if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File is not open\n");
                }
                else
                {
                    printf("File successfully closed\n");
                }
            }

            else
            {
                printf("Command not found\n");
                printf("Please refer help option\n");
            }
        }

        //////////////////////////////////////////////////////
        // Three arguments
        //////////////////////////////////////////////////////

        else if(iCount == 3)
        {
            //////////////////////////////////////////////////////
            // creat FileName Permission
            //////////////////////////////////////////////////////

            if(strcmp(Command[0], "creat") == 0)
            {
                iRet = CreateFile(
                            Command[1],
                            atoi(Command[2])
                       );

                if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create file\n");
                    printf("Reason : No free inode\n");
                }
                else if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid permission\n");
                }
                else if(iRet == ERR_FILE_ALREADY_EXIST)
                {
                    printf("Error : File already exists\n");
                }
                else if(iRet == ERR_MAX_FILES_OPEN)
                {
                    printf("Error : UFDT is full\n");
                }
                else
                {
                    printf(
                        "File successfully created with FD : %d\n",
                        iRet
                    );
                }
            }

            //////////////////////////////////////////////////////
            // open FileName Mode
            //////////////////////////////////////////////////////

            else if(strcmp(Command[0], "open") == 0)
            {
                iRet = OpenFile(
                            Command[1],
                            atoi(Command[2])
                       );

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid mode\n");
                }
                else if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File does not exist\n");
                }
                else if(iRet == ERR_PERMISSION_DENIED)
                {
                    printf("Error : Permission denied\n");
                }
                else if(iRet == ERR_MAX_FILES_OPEN)
                {
                    printf("Error : Maximum files already open\n");
                }
                else
                {
                    printf(
                        "File successfully opened with FD : %d\n",
                        iRet
                    );
                }
            }

            //////////////////////////////////////////////////////
            // read FD Size
            //////////////////////////////////////////////////////

            else if(strcmp(Command[0], "read") == 0)
            {
                int fd = atoi(Command[1]);
                int requestedSize = atoi(Command[2]);

                if(requestedSize <= 0)
                {
                    printf("Error : Invalid size\n");
                    continue;
                }

                EmptyBuffer =
                    (char *)malloc(requestedSize + 1);

                if(EmptyBuffer == NULL)
                {
                    printf("Error : Memory allocation failed\n");
                    continue;
                }

                iRet = read_file(
                            fd,
                            EmptyBuffer,
                            requestedSize
                       );

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid parameters\n");
                    free(EmptyBuffer);
                }
                else if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File does not exist/open\n");
                    free(EmptyBuffer);
                }
                else if(iRet == ERR_INSUFFICIENT_DATA)
                {
                    printf("Error : Insufficient data\n");
                    free(EmptyBuffer);
                }
                else if(iRet == ERR_PERMISSION_DENIED)
                {
                    printf("Error : Permission denied\n");
                    free(EmptyBuffer);
                }
                else
                {
                    printf("Read operation successful\n");
                    printf("Data from file : %s\n", EmptyBuffer);

                    free(EmptyBuffer);
                }
            }

            else
            {
                printf("Command not found\n");
                printf("Please refer help option\n");
            }
        }

        //////////////////////////////////////////////////////
        // Invalid number of arguments
        //////////////////////////////////////////////////////

        else
        {
            printf("Command not found\n");
            printf("Please refer help option\n");
        }
    }

    return 0;
}