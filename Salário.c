#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int func;
    double horas, valor, salario;
    
    scanf("%d%lf%lf",&func, &horas, &valor);
    salario = horas*valor;
    
    printf("NUMBER = %d\n", func);
    printf("SALARY = R$ %.2lf", salario);
    
 


    return 0;

}