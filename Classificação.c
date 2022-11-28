#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a == b && a == c && b == c)
    {
        printf("equilatero\n");
    }

    else if(a == b && a != c && b != c || b == c && b != a && c != a || a == c && a != b && c != b)
    {
        printf("isosceles\n");
    }

    else if(a != b && a != c && b != c)
    {
        printf("escaleno\n");
    }

	return 0;
}