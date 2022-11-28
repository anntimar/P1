#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double desconto1(double dificuldade, double preco, double contador) {
    if (contador > 3) {
        return (double)preco;

    } else if (preco <= 45) {
        preco = 45.00;
        return (double)preco;
    }

    if (dificuldade == 0) {
        preco = preco - (preco * 0.125);

    } else if (dificuldade == 1) {
        preco = preco - (preco * 0.10);

    } else if (dificuldade == 2) {
        preco = preco - (preco * 0.09);

    } else if (dificuldade == 3) {
        preco = preco - (preco * 0.075);

    } else if (dificuldade == 4) {
        preco = preco - (preco * 0.06);

    } else if (dificuldade == 5) {
        preco = preco - (preco * 0.05);
    }
    desconto1(dificuldade, preco, contador + 1);
}

double desconto(double dificuldade, double preco, double contador) {
    if (contador > 3) {
        return (double)preco;
    }

    if (dificuldade == 0) {
        preco = preco - (preco * 0.25);

    } else if (dificuldade == 1) {
        preco = preco - (preco * 0.2);

    } else if (dificuldade == 2) {
        preco = preco - (preco * 0.18);

    } else if (dificuldade == 3) {
        preco = preco - (preco * 0.15);

    } else if (dificuldade == 4) {
        preco = preco - (preco * 0.12);

    } else if (dificuldade == 5) {
        preco = preco - (preco * 0.10);
    }
    
    if (preco <= 100) {
        desconto1(dificuldade, preco, contador + 1);
    } else {
        desconto(dificuldade, preco, contador + 1);
    }
}

void games(int qtd, int contador) {
    if (contador == qtd) {
        return;
    }

    double price, saida, difficulty;

    scanf("%lf %lf", &difficulty, &price);

    if (price <= 45) {
        saida = (double)price;
        printf("Jogo[%d] = R$%.2lf\n", contador, saida);

    } else if (price > 45 && price <= 100) {
        saida = (double)desconto1(difficulty, (double)price, 1);
        printf("Jogo[%d] = R$%.2lf\n", contador, saida);

    } else {
        saida = (double)desconto(difficulty, (double)price, 1);
        printf("Jogo[%d] = R$%.2lf\n", contador, saida);
    }
    games(qtd, contador + 1);
}

int main() {
    int qtd;

    scanf("%d", &qtd);

    games(qtd, 0);

    return 0;
}