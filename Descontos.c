#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void prova_desconto(double original, double com_desconto, int contagem_produtos, int contador) ;
int main() {
    prova_desconto(0, 0, 0, 5);
    return 0;
}

void prova_desconto(double original, double com_desconto, int contagem_produtos, int contador) {
    if(contador == 0) {
        printf("%d", contagem_produtos);
        return;
    }
    scanf("%lf %lf", &original, &com_desconto);
    double desconto = original * 0.2;

    if((original - desconto) >= com_desconto) {
        contagem_produtos++;
    }
    prova_desconto(0, 0, contagem_produtos, contador - 1);
}