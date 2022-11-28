#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int maior, numero;
    
    scanf("%d", &maior);
    
    while (scanf("%d", &numero) != EOF)
        if (numero > maior)
            maior = numero;
    
    printf("%d\n", maior);

    return 0;
}