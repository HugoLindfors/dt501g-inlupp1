#include <stdio.h>
#include <stdbool.h>

bool isvalidnum(int num)
{
        if (num % 2 == 0 || num % 5 == 0)
                return true;
        else
                return false;
}

void printrange(int start, int step, int stop)
{
        for (int i = start; i < stop; i += step)
                if (isvalidnum(i))
                        printf("%d ", i);
        printf("%d\n", stop);
}

int main(void)
{
        printrange(1, 1, 20);
        return 0;
}