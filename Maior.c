#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
     int vet[6], i, maior, menor;

    for (i = 0; i < 6; i++) {
        scanf("%i", &vet[i]);
    }

    maior    = vet[0];
    
    for (i = 1; i < 6; i++) {
        if (vet[i] > maior) {
            maior    = vet[i];
         
        }
    }
    menor    = vet[0];
   
    for (i = 1; i < 6; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];

        }
    }


    printf("%i\n", menor);
    printf("%i\n", maior);

    return 0;
}