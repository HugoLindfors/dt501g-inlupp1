#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int count, int *numbers)
{
        if (!count)
                return 0;

        int maxval;

        for (int i = 1; i < count; ++i)
        {
                if (numbers[i] > maxval)
                        maxval = numbers[i];
        }

        return maxval;
}

int main(int argc, char *argv[])
{
        int numbers[3];

        numbers[0] = atoi(argv[1]);
        numbers[1] = atoi(argv[2]);
        numbers[2] = atoi(argv[3]);

        int count = 3;

        int maxval = max(count, numbers);
        printf("%d\n", maxval);

        return 0;
}