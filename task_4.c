#include <stdio.h>

void printrange(int start, int step, int stop)
{
        for (int i = start; i < stop; i += step)
                printf("%d ", i);
        printf("%d\n", stop);
}

int main(void)
{
        printrange(1, 1, 20);
        return 0;
}