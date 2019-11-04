#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int pid = fork();
    int status;
    if(pid == 0)    //child
    {
        printf("I am child with pid = %ld", (long)getpid());
    }
    else
    {
        wait(&status);  //parent waits till child finishes
        printf("Child completed with status = %d", status);
        printf("I am parent with pid = %ld",(long)getpid());
    }
    printf("Process with pid = %ld is finishing", (long)getpid());
    return 0;
}