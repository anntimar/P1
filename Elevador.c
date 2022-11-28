#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int elevador(int N, int C, int S, int E, int contador, int cont_pessoas){

    scanf("%d %d", &S, &E);
    
    if (N == contador){

        if (cont_pessoas <= C){

            printf("N");
        }
    }
    
    else {
        cont_pessoas = cont_pessoas +(E - S);
        
        if (cont_pessoas > C){
    
            printf("S");
            return 0;
        }
        
        else {
    
         elevador(N,C,S,E,contador+1,cont_pessoas);
    
        }
    }
}

int main (){

    int N,C,S,E;
    scanf("%d %d\n", &N,&C);
    elevador(N,C,S,E, 0,0);

    return 0;
}