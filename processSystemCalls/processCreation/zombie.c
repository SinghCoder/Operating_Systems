#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int pid = fork();
    if(pid >= 0)    //parent
    {
        printf("PArent, pid = %ld",(long)getpid());
        sleep(50);
    }
    else
    {
        /*
            To get rid of zombie process
                kill defunct-_pid_      (replace defunct-_pid_ with the pid of the process)
                kill -9 defunct-_pid_   (force kill)
                kill parent_id_of_defunct-_pid_
                Reboot
        */
        printf("Child, pid = %ld",(long)getpid());
        exit(0);
    }
    printf("Process with pid = %ld is finishing", (long)getpid());
    return 0;
}