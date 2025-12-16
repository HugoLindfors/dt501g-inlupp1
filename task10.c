#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int *arr, int count);
int min(int *arr, int count);

int main(void)
{
        int *nums = NULL;
        int count = 0;
        char input[16];

        printf("Enter numbers (enter :q to quit):\n");

        while (true)
        {
                if (!scanf("%15s", input))
                        break;

                if (!strcmp(input, ":q"))
                        break;

                int value = atoi(input);

                if (!value && input[0] != '0')
                {
                        printf("Invalid input\n");
                        continue;
                }

                ++count;
                int *tmp = realloc(nums, count * sizeof(int));

                if (tmp == NULL)
                {
                        printf("Memory allocation failed\n");
                        free(nums);
                        return 1;
                }

                nums = tmp;
                nums[count - 1] = value;
        }

        if (count > 0)
        {
                int maxval = max(nums, count);
                int minval = min(nums, count);
                printf("Count: %d, Max: %d, Min: %d\n", count, maxval, minval);
        }

        else
        {
                printf("No numbers entered\n");
        }

        free(nums);

        return 0;
}

int max(int *arr, int count)
{
        if (!count)
                return 0;

        int maxval = arr[0];

        for (int i = 1; i < count; ++i)
        {
                if (arr[i] > maxval)
                        maxval = arr[i];
        }

        return maxval;
}

int min(int *arr, int count)
{
        if (!count)
                return 0;

        int minval = arr[0];

        for (int i = 1; i < count; ++i)
        {
                if (arr[i] < minval)
                        minval = arr[i];
        }

        return minval;
}