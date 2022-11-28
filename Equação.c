#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double a, b, c, delta;
    
    scanf ("%lf %lf %lf", &a, &b, &c);
    
    delta = pow(b,2)- 4*a*c;
    
    if (a==0){
    
    printf("NEESG");
    
    }
    
    else if (delta>=0){
    
    printf ("%.2lf\n", (-b+sqrt(delta))/(2*a));
    printf ("%.2lf\n", (-b-sqrt(delta))/(2*a));
    
    }
    
    else if (delta<0){
        
    printf ("NRR");
    
    }
    
	return 0;
}