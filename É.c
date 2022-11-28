#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int num(int primo, int num2){
    
        if(primo<=1){
        return 0;
    }
        if (num2 >= primo){ 
        return 1;
    
    }
        if(primo%num2==0){
        return 0;
    }
    num(primo, num2 + 1);
}
    int e_primo(){
    int primo, i;
    scanf("%d", &primo);
    if(primo!= -1){
        i = num(primo, 2);
        printf("%d\n", i);
    e_primo();
    }
}
    int main(){
        e_primo();
    
    return 0;
}