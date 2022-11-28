#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void contar_votos(int i, int j, int m, int n, int votos[][n], int v_total)
{
  if(j == n)
  {  
    return;
  }
  else
  {
    if(i == m)
    {
      printf("Princesa %d: %d voto(s)\n", j+1, v_total);
      contar_votos(0, j + 1, m, n, votos, 0);
    }
    else
    {
       if(votos[i][j] == 1)
       {
          contar_votos(i + 1, j, m, n, votos, v_total+1);
       }
       else
       {
          contar_votos(i + 1, j, m, n, votos, v_total);
       }
    }
  }
}

void ler_matriz(int i, int j, int m, int n, int votos[][n])
{
  if(i == m)
  {  
    contar_votos(0, 0, m, n, votos, 0);
  }
  else
  {
    if(j == n)
    {
      ler_matriz(i + 1, 0, m, n, votos);
    }
    else
    {
       scanf("%d", &votos[i][j]);
       ler_matriz(i, j + 1, m, n, votos);
    }
  }
}

int main() 
{
  int princesas, eleitores;
  scanf("%d\n%d", &princesas, &eleitores);
  int matriz[eleitores][princesas];
  ler_matriz(0, 0, eleitores, princesas, matriz);

	return 0;
}