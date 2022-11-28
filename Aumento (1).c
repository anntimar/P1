#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double salario, aumento, salarionovo;
    
    scanf("%lf %lf", &salario);
    
    
    if(salario <= 280){
    
        salarionovo= salario +(salario * 0.20);
        aumento = (salario*0.20);
        printf("%.2lf\n", salario);
        printf("20\n");
        printf("%.2lf\n",aumento);
        printf("%.2lf\n", salarionovo);
    }
    
    else if (salario > 280 && salario <= 700){
    
        salarionovo = salario + (salario * 0.15);
        aumento = (salario*0.15);
        printf("%.2lf\n", salario);
        printf("15\n");
        printf("%.2lf\n",aumento);
        printf("%.2lf\n", salarionovo);
    }
    else if(salario > 700 && salario <1500){
    
        salarionovo = salario + (salario *0.10);
        aumento = (salario*0.10);
        printf("%.2lf\n", salario);
        printf("10\n");
        printf("%.2lf\n",aumento);
        printf("%.2lf\n", salarionovo);
    }
    else  {
    
        salarionovo = salario + (salario * 0.05);
        aumento = (salario*0.05);
        printf("%.2lf\n", salario);
        printf("5\n");
        printf("%.2lf\n",aumento);
        printf("%.2lf\n", salarionovo);
    }
   
	return 0;
}