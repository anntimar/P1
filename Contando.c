#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

  int ContaDigitosPares(int valor, int contador){
        if(valor==0){
            return contador;
        }
        if (valor%2==0){
        return ContaDigitosPares(valor/10, contador + 1);
    }
        else {
            return ContaDigitosPares(valor/10, contador);
        }
        
        
    }
   
    int main() {
        int valor, resp, contador = 0;
        scanf("%d", &valor);
        resp=ContaDigitosPares(valor, contador);
        printf("%d",resp);
        
	    return 0;
}

  
