#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int conta_multiplos2(int num2, int num_multiplos2, int mult1, int contador){

    if(num2*num_multiplos2 > mult1){

        return contador;

    }

    if (mult1 > num2*num_multiplos2){

        return conta_multiplos2(num2, num_multiplos2 + 1, mult1, contador);
    }

    if (mult1 = num2*num_multiplos2){

        contador = contador + 1;

        return contador;
    }

}

int conta_multiplos1(int num1, int num2, int num_multiplos, int contador){

   if(num1*num_multiplos >= 50){

       printf("%d",contador);

   }

   else {

       contador = conta_multiplos2(num2, 1, num1*num_multiplos , contador);
       conta_multiplos1(num1, num2, num_multiplos + 1, contador);
   }

}

int main(){

    int num1, num2;
    scanf("%d\n%d",&num1, &num2);
    conta_multiplos1(num1,num2,1,0);


    return 0;
}




