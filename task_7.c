#include <stdio.h>
#include <stdlib.h>

void printtime(int h24, int min)
{
        int i = 0;
        do
        {
                int j = 0;
                do
                {
                        printf("%02d:%02d\n", i, j);
                        j += 10;
                } while (j < 60);
                i += 1;
        } while (i <= h24);

        int j = 0;
        do
        {
                printf("%02d:%02d\n", h24, j);
                j += 10;
        } while (j <= min);
}

int main(int argc, char *argv[])
{
        int h24 = atoi(argv[1]);
        int min = atoi(argv[2]);
        printtime(h24, min);
        return 0;
}