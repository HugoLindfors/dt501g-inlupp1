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
                        if (i < h24 || (i == h24 && j == 0))
                                printf("%02d:%02d\n", i, j);
                        else if (j < min)
                                printf("%02d:%02d\n", i, j);
                        j += 10;
                } while (j < 60);
                i += 1;
        } while (i <= h24);
}

int main(int argc, char *argv[])
{
        // int h24 = atoi(argv[1]);
        // int min = atoi(argv[2]);
        int h24, min;
        scanf("%d", &h24);
        scanf("%d", &min);
        printtime(h24, min);
        return 0;
}