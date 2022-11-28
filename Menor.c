#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num1, num2, num3, num4;
    
    scanf ("%d %d %d", &num1, &num2, &num3);
    
    if (num1>num2){
    
    num4 = num1;
    num1 = num2;
    num2 = num4;
    
    }
    
    if (num1>num3){
    
    num4 = num1;
    num1 = num3;
    num3 = num4;
    
    }
	
	printf ("%d\n", num1);
	
	return 0;
}