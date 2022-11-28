#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int idade (int sec){
    
    return sec * 31536000;
}
int main() {
    
    int sec;
    
    scanf("%d", &sec);
    
    printf("%d\n", idade(sec));
    
	return 0;
}