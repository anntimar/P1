#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int batalha (int turnos, int d1, int v2, int aumento){
    if(aumento== turnos)
    return 0;
    
    if((turnos-aumento)*(d1+50*aumento)>=v2)
    return 1;
    
    return batalha(turnos, d1, v2, aumento+1);
    
}

void vencedor(int n){
    if(n==0)
    return;
    
    int v1,v2,d1,d2;
    scanf("%d %d %d %d", &v1, &v2, &d1, &d2);
    
    int possibilidade = batalha(ceil((double)v1/d2), d1, v2, 0);
    
    if (possibilidade==1)
    
    printf("Clodes\n");
    
    else
    printf("Bezaliel\n");
    
    vencedor(n-1);
}
int main() {
    
    int n;
    scanf("%d", &n);
    
    vencedor(n);
    
    return 0;
    }




   
