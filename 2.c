#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num1, num2, n;
    
    scanf ("%d %d", &num1, &num2);
    
    if (num1>num2){
    
    n = num1;
    num1= num2;
    num2 = n;
    
    }
    
    if (num2<num1){
    
    n = num2;
    num2 = num1;
    num1 = n;
        
  
    }
    
    printf ("%d %d", num1, num2);
	return 0;
}