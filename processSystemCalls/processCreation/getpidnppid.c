#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main()
{
    printf("I am process with pid = %ld", (long)getpid());
    printf("My parent process has pid = %ld", (long)getppid());
    return 0;
}
