#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int sonhos (int tempo, int camada, int n){
    if (n!=camada){
        if(n%2==0){
            return sonhos(tempo + 3, camada, n + 1);
        }
        else {
            return sonhos(tempo + tempo%5, camada, n + 1);
        }
    }
    else {
        return tempo;
    }
    
}

int main() {
    int n =0, tempo, camada, resul;
    scanf("%d%d", &tempo, &camada);
    resul=sonhos(tempo, camada, n);
    printf ("%d\n",resul);
	return 0;
}

