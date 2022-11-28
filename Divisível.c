#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int num (int x, int n, int contador);
int main() {
    int x, resposta;
    scanf("%d",&x );
    resposta= num(x,3, 0);
    
    if(resposta==0){
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    else {
        printf ("%d\n", resposta);
    }
    
}

int num (int x, int n, int contador){
    if (n>x){
        return contador;
    }
    if (x%n==0){
        return num(x, n+3, contador +1);
    }
    else {
        
        return num(x, n+3, contador);
    }
    return 0;
}
    
