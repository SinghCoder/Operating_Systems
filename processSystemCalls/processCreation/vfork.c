#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int pid = vfork();
    if(pid >= 0)    //parent
    {
        printf("PArent, pid = %ld",(long)getpid());
    }
    else
    {
        printf("Child, pid = %ld",(long)getpid());
    }
    printf("Process with pid = %ld is finishing", (long)getpid());
    return 0;
}