#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rolldice(int size) { return rand() % (size) + 1; }

int main(void)
{
        srand(time(NULL));
        int diceroll = rolldice(6);
        printf("%d\n", diceroll);
        return 0;
}