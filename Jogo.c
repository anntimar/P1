#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void contar(int jogadores, int rodadas, int num_jogador, int dado, int valor_casa[], int posicao, int position_p[], int casas, int count)
{
  if(count == rodadas)
  {
    return;
  }
  else
  {
    if(num_jogador == jogadores)
    {
      return contar(jogadores, rodadas, 0, 0, valor_casa, 0, position_p, casas, count+1);
    }
    else
    {
      scanf("%d", &dado);
      posicao = position_p[num_jogador];
      posicao += dado;
      if(posicao >= casas)
      {
        posicao = posicao % casas;
      }
      posicao += valor_casa[posicao];
      if(posicao >= casas)
      {
        posicao = posicao % casas;
      }
      if(posicao < 0)
      {
          posicao = casas + posicao;
      }
      position_p[num_jogador] = posicao;
    }
  }
  contar(jogadores, rodadas, num_jogador+1, 0, valor_casa, 0, position_p, casas, count);
}

int main()
{
  int casas, jogadores, rodadas, i;

  scanf("%d %d %d", &casas, &jogadores, &rodadas);

  int array_c[casas];
  int array_j[jogadores];

  for(i = 0; i < casas; i++)
  {
    scanf("%d", &array_c[i]);
  }
  for(i = 0; i < jogadores; i++)
  {
    array_j[i] = 0;
  }

  contar(jogadores, rodadas, 0, 0, array_c, 0, array_j, casas, 0);

  for(i = 0; i < jogadores; i++)
  {
    printf("%d\n", array_j[i]);
  }
  return 0;
}