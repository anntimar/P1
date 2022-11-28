#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int problemas, resolvidos;
    double porcentagem;
    
    scanf("%d %d %lf", &problemas, &resolvidos, &porcentagem);
    porcentagem = 100.0*resolvidos/problemas;
    
    
    if (porcentagem >= 0 && porcentagem <= 20) {
    printf("%.2lf%% 4.40%% Pessimo", porcentagem);
    }
    else if (porcentagem >20 && porcentagem <=40){
    printf("%.2lf%% 31.65%% Ruim",porcentagem);
    }
    else if (porcentagem >40 && porcentagem <=60){
    printf("%.2lf%% 56.82%% Bom");
    }
    else if(porcentagem >60 && porcentagem <80){
    printf("%.2lf%% 80.00%% Muito Bom", porcentagem);
    }
    else if(porcentagem >=80 && porcentagem <=100){
    printf("%.2lf%% 94.00%% Excelente", porcentagem);
    
    }
	return 0;
}