#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eh_triangular (int inicial, int n);


int main() 
{
    int produto, resultado;
    scanf("%d", &produto);
    resultado = eh_triangular(1, produto);
    
    if (resultado>0)
    {
        printf ("%d * %d * %d = %d\n", resultado, resultado +1, resultado +2,produto);
        printf("Verdadeiro\n");
    }
    else
    {
        printf("Falso\n");
    }
}
    
int eh_triangular (int inicial, int n)
{
    
    int produto= inicial*(inicial+1) *(inicial +2);
    if (produto==n){
        return inicial;
    }  
        
    else if (produto >n){
        
        return 0;
        
    }
    else {
        return eh_triangular(inicial+1, n);
    }
   return 0;
}
    
   

    
  
    
