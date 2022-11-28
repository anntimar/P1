#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double p(double area)
{
    return (3.14159 * (area * area)) / 10000;
}
int main() {
    
    double area;
    
    scanf("%lf", &area);
    
    printf("Area = %.4lf\n",p(area));
    
	return 0;
}