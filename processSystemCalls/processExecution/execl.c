#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char* binaryPath = "/bin/ls";
    char *arg1 = "l";
    char *arg2 = "/home";

    execl(binaryPath, binaryPath, arg1, arg2);
    return 0;
}