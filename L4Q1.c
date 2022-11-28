#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int validacao (int matriz[][3])
{
  if (matriz[0][0] + matriz[1][1] + matriz[2][2] == 3 && matriz[0][1]+ matriz[0][2]+ matriz[1][0]+ matriz[1][2]+ matriz[2][0]+ matriz[2][1] == 0)
    return 1;
  else if (matriz[0][2] + matriz[1][1]+ matriz[2][0] == 3 &&  matriz[0][0]+ matriz[0][1]+ matriz[1][0]+ matriz[1][2]+ matriz[2][1]+ matriz[2][2] == 0)
    return 2;
  else
    return 0;
}
void ler_matriz (int i, int j, int matriz[][3])
{
  for (i = 0; i < 3; i++ )
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d",&matriz[i][j]);
    }
  }
}
void empire_comparator (int life_Luke, int life_Vader, int matriz[][3], int batalhas)
{
  int Vader, Luke;

  if (life_Luke <= 0 || life_Vader <= 0 || batalhas == 10)
  {
      if (life_Luke <= 0 && life_Vader > 0)
      {
        printf("Darth Vader venceu.\n");
        return;
      }

      if (life_Vader <=0 && life_Luke > 0)
      {
        printf("Luke Skywalker venceu.\n");
        return;
      }
      if(life_Luke == life_Vader)
      {
        printf("Houve empate.\n");
        return;
      }
    }

  else
  {
    
     ler_matriz(0,0,matriz);
     Luke = validacao (matriz);

     ler_matriz(0,0,matriz);
     Vader = validacao (matriz);

     if (Vader == 2 && Luke == 2)
     {
       life_Vader -= 15;
       life_Luke -= 15;
     }

     if (Luke == 1 && Vader == 1)
     {

       life_Luke -=15;
       life_Vader -=15;

     }

     if ((Luke == 1 || Luke == 2) && Vader == 0)
     {
       life_Vader -=15;
     }

     if ((Vader == 2 || Vader == 1)&& Luke == 0)
     {
       life_Luke -=15;
     }


  }
  empire_comparator(life_Luke,life_Vader,matriz,batalhas+1);
}

int main()
{
  int life_Luke = 0;
  int life_Vader = 0;
  int matriz [3][3];

  scanf("%d %d", &life_Luke, &life_Vader);
  empire_comparator (life_Luke,life_Vader,matriz,0);

  return 0;
}