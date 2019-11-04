#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int sum = 0;
    int i;
    if(argc != 4)
    {
        printf("Invalid number of arguements\n");
        exit(1);
    }
    for(i = 0; i<4; i++)
    {
        sum += atoi(argv[i]);
    }
    printf("Sum = %d", sum);
    return 0;
}