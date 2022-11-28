#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int final_r (int i, int j, int n, int m,int matriz [][m], int barray[], int cont, int result)
{
  if (cont > 81)
  {
    return result;

  }
  else
  {
    if (cont < 27)
    {
      if ((i == 3 && cont <= 10)||(i == 6 && cont <=19) || (i == 9 && cont <= 28))
      {
        j = 0; memset(barray,0,sizeof(int)*9);
      }
      if (j == 3)
      {
        final_r (i+1,0,n,m,matriz,barray,cont,result);
        return 0;
      }
    }

    if (cont < 54)
    {
      if (cont == 28)
      {
        i = 0; j = 3 ; memset(barray,0,sizeof(int)*9);
      }

      if ((i == 3 && cont <= 37)|| (i == 6 && cont <= 46) || (i == 9 && cont <= 55))
      {
        //j = 3;
        memset(barray,0,sizeof(int)*9);
      }
      if (j == 6)
      {
        final_r (i+1,3,n,m,matriz,barray,cont,result);
        return 0;
      }
    }
    if (cont <= 81)
    {
      if (cont == 55)
      {
        i = 0; j = 6; memset(barray,0,sizeof(int)*9);
      }

      if ((i == 3 && cont <= 64)|| (i == 6 && cont <= 73)|| (i == 9 && cont > 74))
      {

        memset(barray,0,sizeof(int)*9);
      }
      if (j == 9)
      {
        final_r (i+1,6,n,m,matriz,barray,cont,result);
      }
    }

    if (barray[matriz[i][j] - 1] == 1)
    {
      result +=1;
    }
    else
    {
      barray[matriz[i][j]-1] = 1;
    }

    final_r (i,j+1,n,m,matriz,barray,cont+1,result);
    return 0;
  }
}

int conta_colunas (int i, int j, int n, int m,int matriz [][m], int barray[])
{
  if (j == m)
    return 1;

  if (i == n)
  {
    memset(barray,0,sizeof(int)*9);
    conta_colunas (0,j+1,n,m,matriz,barray);
  }
  else
  {
    if (barray[matriz[i][j] - 1] == 1)
    {
      return 0;
    }
    else
    {
      barray[matriz[i][j]-1] = 1;
    }

    conta_colunas (i+1,j,n,m,matriz,barray);
  }
}


int conta_linhas (int i, int j, int n, int m,int matriz [][m], int barray[])
{
  if (i == n)
    return 1;

  if (j == m)
  {
    memset(barray,0,sizeof(int)*9);
    conta_linhas (i+1,0,n,m,matriz,barray);
  }
  else
  {
    if (barray[matriz[i][j] - 1] == 1)
    {
      return 0;
    }
    else
    {
      barray[matriz[i][j]-1] = 1;
    }

    conta_linhas (i,j+1,n,m,matriz,barray);
  }
}

int main ()
{
  int n = 9, m = 9,i,j;
  int barray[9];
  int qtd = 0,k;
  scanf("%d",&qtd);

  int matriz [n][m];

  for (k = 0; k < qtd; k++)
  {
    int final = -1;
    int linhas = 0, colunas = 0;
    memset(barray,0,sizeof(barray));

    for(i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
      {
        scanf("%d",&matriz[i][j]);
      }
    }
    linhas = conta_linhas(0,0,n,m,matriz,barray);


      if (linhas == 1)
      colunas = conta_colunas(0,0,n,m,matriz,barray);


      if (colunas == 1)
      final = final_r(0,0,n,m,matriz,barray,1,0);


      if (final == 0)
      printf("Instancia %d\nSIM\n\n",k+1);
      else printf("Instancia %d\nNAO\n\n",k+1);
    }
return 0;
}