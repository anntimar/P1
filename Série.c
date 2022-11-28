#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


       double fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}
 
int eh_primo(int n, int i) {
    if (i == 1) {
        return 1;
    } else {
        if (n % i == 0) {
            return 0;
        }
        return eh_primo(n, i-1);
    }
}
 
int proximo_primo(int n) {
    if (eh_primo(n, n-1) == 1) {
        return n;
    } else {
        return proximo_primo(n+1);
    }
}
 
double serie(int n, int atual, int primo, double total) {
    if (atual > n) {
        return total;
    } else {
        if (atual > primo) {
            primo = proximo_primo(primo+1);
        }
        total += fatorial(atual)/primo;
        printf("%d!/%d", atual, primo);
 
        if (atual != n) {
            printf(" + ");
        }
        return serie(n, atual+1, primo, total);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    double soma = serie(n, 1, 1, 0);
    printf("\n%.2lf\n", soma);
    return 0;
}