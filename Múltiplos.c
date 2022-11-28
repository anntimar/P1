#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void eh_multiploN (int n, int a, int b, int multiplos);
int main(){
    
    int n, a, b;
    scanf ("%d%d%d", &n, &a, &b);
    eh_multiploN(n, a, b, 0);
    
    return 0;
}

void eh_multiploN (int n , int a, int b, int multiplos){
    
    if (a>b){
    
    if (multiplos == 0){
            printf("INEXISTENTE\n");
    }   
    
    return;
}

    if (a%n==0){
        
    printf ("%d\n", a);
    multiplos++;
    
}
     eh_multiploN(n, a +1 , b, multiplos);
     
    
    }
    
