#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculo(int end, int contador, double valor_total, int inicial, int inicial_den);

int main() {
    int end;
    scanf("%d", &end);

    calculo(end, 1, 0, 0, 1);

    return 0;
}
void calculo(int end, int contador, double valor_total, int inicial, int inicial_den) {
    if(contador > end) {
        printf("S: %.2lf\n", valor_total);
        return;
    }
    if (contador % 2 == 0) {
        valor_total += 1.0 * pow(2, inicial) / (3 * inicial_den);
        inicial_den++;
        inicial++;

    } else {
        valor_total += 1.0 * contador / pow(2, inicial);
        inicial++;
    }
    calculo(end, contador + 1, valor_total, inicial, inicial_den);
}