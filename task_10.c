#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int number1, int number2, int number3)
{
        if (number1 > number2 && number1 > number3)
                return number1;
        else if (number2 > number1 && number1 > number3)
                return number2;
        else if (number3 > number1 && number3 > number2)
                return number3;
        else
                return 0;
}

int main(int argc, char *argv[])
{
        // int number1 = atoi(argv[1]);
        // int number2 = atoi(argv[2]);
        // int number3 = atoi(argv[3]);

        int number1, number2, number3;
        scanf("%d", &number1);
        scanf("%d", &number2);
        scanf("%d", &number3);

        int maxval = max(number1, number2, number3);
        printf("%d\n", maxval);

        return 0;
}