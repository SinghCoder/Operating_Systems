#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char* binaryPath = "ls";
    char *args[] = {binaryPath, "-l", "/home", NULL};
    execvp(binaryPath, args);
    return 0;
}