#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int level, choque;

    scanf("%d", &level);
    if(level >= 1 && level <= 20)
    {
        choque = 20 + (level * level * level);
    }

    else if(level >= 21 && level <= 40)
    {
        choque = 8000 + (level - 10) * (level - 10);
    }

    else if(level >= 41 && level <= 60)
    {
        choque = 9000 + (5 * level);
    }

    else if(level >= 61 && level <= 80)
    {
        choque = 9300 + (2 * level);
    }

    else if(level >= 81 && level <= 100)
    {
        choque = 9500 + level;
    }

    printf("Potencia de : %d W\n", choque);

	return 0;
}