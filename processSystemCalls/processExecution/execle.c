#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char* binaryPath = "/bin/bash";
    char *arg1 = "-c";
    char *arg2 = "Visit $HOSTNAME:$PORT from your browser";
    char* const env[] = {"HOSTNAME=www.google.com", "PORT:8000",NULL};
    execle(binaryPath, binaryPath, arg1, arg2, NULL, env);
    return 0;
}