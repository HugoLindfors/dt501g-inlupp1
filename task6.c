#include <stdio.h>

void printtime(int h24, int min)
{

        if (0 >= h24 || h24 > 24 && 0 >= min || min > 60)
                printf("ERROR");
        else
        {
                for (int i = 0; i <= h24; ++i)
                {
                        for (int j = 0; j < 60; ++j)
                        {
                                printf("%d:%02d\n", i, j);
                        }
                }

                for (int j = 0; j <= min; ++j)
                {
                        printf("%d:%02d\n", h24, j);
                }
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