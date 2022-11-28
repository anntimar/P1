#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double salario;
    
    scanf ("%lf", &salario);
    
    if (salario>500){
    
    printf("%.2lf",salario*1.1);
    
    }
    
    else if (salario>=300 &&salario<=500){
    
    printf("%.2f",salario*1.07);
    }
    
    else if (salario<300){
        
    printf("%.2lf",salario*1.05);
    
    }
	return 0;
}