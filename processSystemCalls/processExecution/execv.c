#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char* binaryPath = "/bin/ls";
    char *args[] = {binaryPath, "-lh", "/home", NULL};
    execv(binaryPath, args);
    return 0;
}