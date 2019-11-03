#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char* argv[])
{
    if(argc != 3)
    {
        printf("Please enter all parameters for execution..\n");
        exit(1);
    }

    if( mkdir(argv[1],0777) != 0)
    {
        printf("Error in mkdir()");
        exit(1);
    }

    if(rmdir(argv[2]) != 0)
    {
        printf("Error in rmdir()");
        exit(1);
    }
    printf("mkdir and rmdir succesfull\n");
    return 0;
}