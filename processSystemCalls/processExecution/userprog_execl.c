#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char* binaryPath = "./sum";
    execlp(binaryPath, binaryPath,100,200,300, NULL);
    printf("Execl call unsuccessful\n");    //If it were successful, the address space would have been overwritten and control never reached here
    return 0;
}