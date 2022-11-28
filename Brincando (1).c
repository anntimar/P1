#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void verify (int n, int m, int i, int j,int matriz[][m], double media, double med, double soma, int menor, int delta)
{ 
  if (i == n)
  {
      printf("%.2lf ", media/med);
      printf("%d ", menor);
    
    if (menor %2 == 0)
    {
      delta = 1;
    }
    else
    {
      delta = 0;
    }
      printf("%d ",delta);
      printf("%d\n", matriz[0][1]+matriz[0][2]+matriz[1][0]+matriz[1][2]+matriz[2][0]+matriz[2][1]);
      return;
  }

  if (j == m)
  {
    i+=1;
    j = 0;
    verify ( n, m, i, j, matriz, media,med, soma,  menor, delta);
  }

  else
  {
    if (matriz[i][j] > 0)
    {
      media+=matriz [i][j];
      med ++;
    }
    if (i == 0 && j == 0) 
      menor = matriz[i][j];
     
    else
    {
      if (menor > matriz[i][j])
      {
        menor = matriz[i][j];
      }
    }
    verify ( n, m, i, j+1, matriz, media,med, soma,  menor, delta);
  }
}

int main() 
{
  int n = 3, m = 3;
  int matriz[n][m];
  int i,j;
  for (i = 0; i < 3; i++ )
  {
    for (j = 0; j < 3; j++)
    {
      scanf ("%d", &matriz[i][j]);
    }
  }
 verify(n, m, 0 ,0, matriz,0,0,0,0,0);
  return 0;
}