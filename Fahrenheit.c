#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double C;
    int F;
    
    scanf("%d", &F);
    C = (F-32)/1.8;
    
    printf("%.2lf", C);
	return 0;
}