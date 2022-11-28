#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double salario, renda, resultado;

    scanf ("%lf %lf", &salario, &renda);

    resultado = (salario * 0.30)-renda;
    
    if (resultado <= 0){
    
    printf("0.00\n");
    
    }
    
    else {
        
    printf("%.2lf",resultado);
    }
    
	return 0;
}