#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void arvore_de_natal(double valor, int quantidade, double valor_total);

int main() {
    double valor_inicial;
    scanf("%lf", &valor_inicial);

    arvore_de_natal(0, 0, valor_inicial);

    return 0;
}
void arvore_de_natal(double valor, int quantidade, double valor_total) {
    if(scanf("%d %lf", &quantidade, &valor) == EOF) {
        printf("%.2lf\n%.2lf\n", valor_total, valor_total / 21);
        return;
    }
    valor_total = valor_total + (quantidade * valor);
    arvore_de_natal(0, 0, valor_total);
}