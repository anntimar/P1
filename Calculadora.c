#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double valor1, valorf, imposto, aliquota, frete, fretef, dolar, totalimposto, icms, total, vtotal;
    scanf("%lf %lf %lf %lf", &dolar, &aliquota, &valor1, &frete);
    if (valor1 < 2500){
        fretef = frete * dolar;
    }
    
    aliquota = aliquota / 100;
    valor1 = valor1 * dolar;
    frete = frete * dolar;
    valorf = valor1 + frete;
    imposto = (valor1 + fretef) * 0.6;
    vtotal = (valor1 + fretef + imposto) / (1 - aliquota);
    icms = vtotal * aliquota;
    totalimposto = imposto + icms;
    total = totalimposto + frete + valor1;
    
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n", dolar, valor1, frete, valorf, imposto, icms, totalimposto, total);
    if (fretef != 0){
        printf("Impostos calculados com o frete");
    }
    else{
        printf("Impostos calculados sem o frete");
    }
     
    return 0;
}