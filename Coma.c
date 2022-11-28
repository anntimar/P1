#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double p (double valorpago){
    
    return valorpago+(valorpago/10);
}


int main() {
    
    double valorpago;
    
    scanf("%lf",&valorpago);
    
    printf("%.2lf\n", p(valorpago));
    
    


	return 0;
}