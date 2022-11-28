#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void soma(int i, int j, int m, int n, int m1[][n], int m2[][n])
{
    int valor;
    
   if(i == m)
  {  
       return;
  }
  else
  {
    if(j == n)
    {
      soma(i + 1, 0, m, n, m1, m2);
    }
    else
    {
        valor = m1[i][j] + m2[i][j];
        printf("%d\n", valor);
       soma(i, j + 1, m, n, m1, m2);
    }
  }
}

void ler_m2(int i, int j, int m, int n, int m2[][n])
{
   if(i == m)
  {  
       return;
  }
  else
  {
    if(j == n)
    {
      ler_m2(i + 1, 0, m, n, m2);
    }
    else
    {
       scanf("%d", &m2[i][j]);
       ler_m2(i, j + 1, m, n, m2);
    }
  }
}

void ler_m1(int i, int j, int m, int n, int m1[][n])
{
   if(i == m)
  {  
       return;
  }
  else
  {
    if(j == n)
    {
      ler_m1(i + 1, 0, m, n, m1);
    }
    else
    {
       scanf("%d", &m1[i][j]);
       ler_m1(i, j + 1, m, n, m1);
    }
  }
}

int main() 
{
    int a;
    scanf("%d", &a);
    int m1[a][a], m2[a][a];
    
    if(a == 0)
    {
        printf("Vazia");
    }
    else
    {
        ler_m1(0, 0, a, a, m1);
        ler_m2(0, 0, a, a, m2);
        soma(0, 0, a, a, m1, m2);
    }
    
    return 0;
}