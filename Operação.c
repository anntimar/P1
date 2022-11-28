#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_m1(int i, double valor, double credito, double debito, double saldo)
{
  scanf("%d", &i);
  if(i == -1)
  {
    printf("Creditos: R$ %.2lf\n", credito);
    printf("Debitos: R$ %.2lf\n", debito);
    printf("Saldo: R$ %.2lf\n", saldo);
    return;
  }
  if(i == 1)
  {
    scanf("%lf", &valor);
    credito += valor;
    saldo += valor;
    ler_m1(0, 0, credito, debito, saldo);
  }
  if(i == 0)
  {
    scanf("%lf", &valor);
    debito += valor;
    saldo -= valor;
    ler_m1(0, 0, credito, debito, saldo);
  }
}

int main()
{
  ler_m1(0, 0, 0, 0, 0);

  return 0;
}
