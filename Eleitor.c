#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int idade;
    
    scanf ("%d", &idade);
    
    if (idade<16){
        
    printf ("nao eleitor\n");
    
    }
    
    else if (idade>=18 &&idade<=65){
        
    printf ("eleitor obrigatorio\n");
    
    }
    
    else if (idade=16 &&idade<=18 ||idade>65){
        
    printf ("eleitor facultativo\n");
    }
	return 0;
}