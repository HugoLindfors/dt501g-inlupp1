#include <stdio.h>
#include <stdlib.h>

void printtime(int h24, int min)
{

        int i = 0;
        while (i <= h24)
        {
                int j = 0;
                while (j < 60)
                {
                        printf("%02d:%02d\n", i, j);
                        j += 10;
                }
                ++i;
        }

        int j = 0;
        while (j <= min)
        {
                printf("%02d:%02d\n", h24, j);
                j += 10;
        }
}

int main(int argc, char *argv[])
{
        int h24 = atoi(argv[1]);
        int min = atoi(argv[2]);
        printtime(h24, min);
        return 0;
}