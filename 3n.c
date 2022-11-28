#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int teste_ciclo(int num1, int contador) {
    if (num1 == 1) {
        return contador;
    }
    if (num1 % 2 == 0) {
        num1 = num1 / 2;
        contador++;
    } else { 
        num1 = (num1 * 3) + 1;
        contador++;
    }
    teste_ciclo(num1, contador);
}

int maior_ciclo(int num1, int final, int maior) {
    if(num1 > final) {
        return maior;
    }
    if ((teste_ciclo(num1, 1)) > maior) {
        maior = teste_ciclo(num1, 1);
    }
    num1++;
    maior_ciclo(num1, final, maior);
}

void ciclo(int n1, int n2) {
    int num1, num2;

    if (scanf("%d %d", &num1, &num2) == EOF) {
        return;
    }

    if (num1 > num2) {
        printf("%d %d %d\n", num1, num2, maior_ciclo(num2, num1, 0));
        
    } else {
        printf("%d %d %d\n", num1, num2, maior_ciclo(num1, num2, 0));
    }
    ciclo(0, 0);
}

int main() {
    ciclo(0, 0);

    return 0;
}