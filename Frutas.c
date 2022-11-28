#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculo(int dias, double valor_dia[], int count, double gasto_dia)
{
  if(count == dias)
  {
    double media_gasto = gasto_dia/dias;
    return printf("R$ %.2lf por dia\n", media_gasto);
  }
  else
  {
    gasto_dia += valor_dia[count];
    calculo(dias, valor_dia, count+1, gasto_dia);
  }
}

int count_espaco(char frutas[], int fruit_count, int letras, int count, int dia)
{
  if(count == letras)
  {
    printf("dia %d: %d kg\n", dia+1, fruit_count);
    return fruit_count;
  }
  else
  {
    if(frutas[count] == ' ')
    {
        fruit_count += 1;
    }
    count_espaco(frutas, fruit_count, letras, count+1, dia);
  }
}

void funcao(int dias, char frutas[], double valor_dia[], int count, double kg_dia)
{
  if(count == dias)
  {
    printf("%.2lf kg por dia\n", kg_dia/dias);
    calculo(dias, valor_dia, 0, 0);
    return;
  }
  else
  {
    scanf("%lf", &valor_dia[count]);
    scanf(" %[^\n]s", frutas);
    kg_dia += count_espaco(frutas, 1, strlen(frutas), 0, count);
    funcao(dias, frutas, valor_dia, count+1, kg_dia);
  }
}

int main()
{
  int a;
  scanf("%d", &a);
  char frutas[100];
  double valor_dia[a];

  funcao(a, frutas, valor_dia, 0, 0);

	return 0;
}