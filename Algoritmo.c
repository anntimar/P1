#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    
    int algoritmo(int variavel1, int variavel2){

    if (variavel1%variavel2==0){
        return variavel2;
    }
    else{
        algoritmo(variavel2, variavel1%variavel2);
    }
}
int euclides(int n1){
    
    if(n1==0){
        return 0;
    }
    
int variavel1, variavel2;
scanf("%d %d", &variavel1, &variavel2);

int mdc = algoritmo(variavel1, variavel2);
printf("MDC(%d,%d) = %d\n", variavel1, variavel2, mdc);
euclides(n1 -1);

}
int main(){
    int n;
    scanf("%d", &n);
    euclides(n);

	return 0;
}