#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int loop (int i, int n, int gabarito_aux[])
{
  if (i == 10)
  {
    return 0;
  }
  else
  {
    if (n == gabarito_aux[i])
    {
      return 1;
    }
    loop (i+1,n,gabarito_aux);
  }
}
void comparador (int gabarito[], int i, int j, int n, int m, int total,int cont,int ganhador,int matriz[][m],int gabarito_aux[])
{
  if (i == n)
  {
    printf("Total de ganhadores: %d\n",ganhador);
    return;
  }

  if (j == m)
  {
    if (cont == 6)
    {
       if (total == 6)
      {
        ganhador +=1;
      }

      memset(gabarito_aux,-1, sizeof (int)*10);

      comparador(gabarito,i+1,0,n,m,0,0,ganhador,matriz,gabarito_aux);
    }
    else
    {
      comparador(gabarito,i,0,n,m,total,cont+1,ganhador,matriz,gabarito_aux);
    }
  }
  else
  {
    if (gabarito[cont] == matriz[i][j])
    {
      int retorno = loop(0,gabarito[cont],gabarito_aux);

      if (retorno == 0)
      {
        total+=1;
        gabarito_aux[j] = gabarito[cont];
      }

    }
    comparador(gabarito,i,j+1,n,m,total,cont,ganhador,matriz,gabarito_aux);
  }
}
void ler_gabarito (int gabarito[], int cont)
{
  if (cont == 6)
  {
    return;
  }
  else
  {
    scanf("%d",&gabarito[cont]);
    ler_gabarito(gabarito,cont+1);
   }
}
void ler_matriz (int i, int j, int n, int m, int matriz [][m])
{
  char tipo;

  if (j == m)
  {
    j = 0;
    i += 1;
  }

  if (i == n)
  {
    return;
  }

  else
  {
    scanf("%d",&matriz[i][j]);
    scanf("%c",&tipo);

    if (tipo == ',')
    {
      ler_matriz(i,j+1,n,m,matriz);
      return;
    }
    else if (tipo == '\n')
    {
      ler_matriz(i,m,n,m,matriz);
    }
  }
}
int main ()
{
  int qtd,i,j;
  scanf("%d",&qtd);
  int matriz [qtd][10];
  memset(matriz,-1, sizeof(matriz)); 
  int gabarito [6];
  int gabarito_aux[10];
  memset(gabarito_aux,-1, sizeof(gabarito_aux));

  ler_matriz(0,0,qtd,10,matriz);
  ler_gabarito (gabarito,0);
  comparador(gabarito,0,0,qtd,10,0,0,0,matriz,gabarito_aux);
  return 0;
}