#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char* binaryPath = "/bin/bash";
    char *args [] = {binaryPath,"-c","Visit $HOSTNAME:$PORT from your browser"};
    char* const env[] = {"HOSTNAME=www.google.com", "PORT:8000",NULL};
    execle(binaryPath, args, env);
    return 0;
}