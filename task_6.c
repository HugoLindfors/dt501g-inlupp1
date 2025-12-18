#include <stdio.h>
#include <stdlib.h>

void printtime(int h24, int min)
{
        for (int i = 0; i <= h24; ++i)
        {
                for (int j = 0; j < 60; j += 10)
                {
                        printf("%02d:%02d\n", i, j);
                }
        }

        for (int j = 0; j <= min; j += 10)
        {
                printf("%02d:%0d\n", h24, j);
        }
}

int main(int argc, char *argv[])
{
        int h24 = atoi(argv[1]);
        int min = atoi(argv[2]);
        printtime(h24, min);
        return 0;
}