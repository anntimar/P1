#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int fatorial(int n){
        
        if(n==1 || n==0){
        return 1;
        }
        if(n>=0 && n<=12){
        return n*fatorial(n-1);
        }
    }
       int resultado(){
           int n, valor;
           scanf("%d", &n);
           if(n!=-1){
               valor = fatorial(n);
               printf("%d\n", valor);
            resultado();
           }
       } 
    
        int main() {
            resultado();
            
            return 0;
}