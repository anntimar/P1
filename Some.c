#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1000], b[1000], soma[1000];
    int i, j, k, tama, tamb, tams, aux=0, ai, bi, s;
    
    scanf("%1000s%*c", a);
    scanf("%1000s%*c", b);
    
    tama = strlen(a);
    tamb = strlen(b);
   
    tams = (tama > tamb ? tama : tamb) + 1;
    
    soma[tams] = '\0'; 
    for(i=tama-1, j=tamb-1, k=tams-1; k >= 0; i--, j--, k--){
        ai = i >= 0 ? a[i] - '0' : 0; 
        bi = j >= 0 ? b[j] - '0' : 0; 
        s = ai + bi + aux; 
        soma[k] = s % 10 + '0'; 
        aux = s / 10; 
    }
    
    
    if(soma[0] == '0'){
        for(i=0; soma[i]; i++){ 
            soma[i] = soma[i+1];
        }
    }

    printf("%s", soma);
    
    return 0;
}
