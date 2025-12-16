#include <stdio.h>

void printtime(int h24, int min)
{

        if (0 >= h24 || h24 > 24 && 0 >= min || min > 60) {
                printf("ERROR");
        } else {
                int i = 0;
                do {
                        int j = 0;
                        do {
                                printf("%d:%02d\n", i, j);
                                ++j;
                        } while (j < 60);
                        ++i;
                } while (i <= h24);

                int j = 0;
                do {
                        printf("%d:%02d\n", h24, j);
                        ++j;
                } while (j <= min);
        }
}

int main(void)
{
        int h24;
        int min;
        printf("\nEnter time (h:mm): ");
        scanf("%d:%d", &h24, &min);
        printtime(h24, min);
        return 0;
}