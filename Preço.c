#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double litros, valor, desc, valor1, valor2;
    char comb;
    scanf(" %lf", &litros);
    scanf(" %c", &comb);

    if(comb == 'A')
    {
        if(litros <= 20)
        {
            desc = 1.9 * 0.03;
            valor = 1.9 - desc;
            valor1 = valor * litros;
            printf("R$ %.2lf\n", valor1);
        }
        else
        {
            desc = 1.9 * 0.05;
            valor = 1.9 - desc;
            valor2 = valor * litros;
            printf("R$ %.2lf\n", valor2);
        }
        
        
    }

    else if(comb == 'G')
    {
        if(litros <= 20)
        {
            desc = 2.5 * 0.04;
            valor = 2.5 - desc;
            valor1 = valor * litros;
            printf("R$ %.2lf\n", valor1);
        }
        else
        {
            desc = 2.5 * 0.06;
            valor = 2.5 - desc;
            valor2 = valor * litros;
            printf("R$ %.2lf\n", valor2);
        }
        
    }

    else if(comb == 'D')
    {
        if(litros <= 25)
        {
            valor = litros * 1.66;
            printf("R$ %.2lf\n", valor);
        }
        else
        {
            desc = 1.66 * 0.04;
            valor = 1.66 - desc;
            valor2 = valor * litros;
            printf("R$ %.2lf\n", valor2);
        }
    }
    return 0;

}