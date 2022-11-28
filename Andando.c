#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a, b, c;
    
    scanf ("%d%d%d",&a, &b, &c);
    
    if (a==0||b==0||c==0){
    
    printf ("S\n");
    
    }
    
    else if (a==b || b==c||a==c){
    
    printf("S\n");
    
    }
    
    
    else if (a + b == c || a + c == b || b + c == a){

    printf("S\n");
    }
    
    else {
        
    printf("N\n");
    }
	return 0;
}