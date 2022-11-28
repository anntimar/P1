#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int conta(float x,float y,float w){
    float num;
    scanf("%f",&num);

    if(num == 999.0){
        printf("%.2f\n",y);
        printf("%.0f\n",x);
        return 0;
    }

    if(num > 2){
        conta(x+1,y = (12.89*(num-2))+w,w =y);
    }

    if(num < 3){
        conta(x,y,w);
    }
}

int main(){
    conta(0,0,0);
    return 0;
}