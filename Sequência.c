#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void result (int x, int y, int z, int cont, int i)
{
  if (cont > y)
  {
    printf("\n");
    return;
  }
  if (x == 1)
  {
      if (i == x)
      {
        printf("%d\n",cont);
      }
      else
      {
        printf("%d\n",cont);
      }
      result (x,y,z,cont+z,i);
      return;
    }
    else
    {
      if (i == x)
      {
        printf("%d ",cont);
        result (x,y,z,cont+z,1);
      }
      else
      {
        if (i+1 == x)
        {
          printf("%d\n",cont);
        }
        else
        {
          printf("%d ",cont);
        }
        result (x,y,z,cont+z,i+1);
      }
    }
  }

int main ()
{
  int x,y,z;
  scanf("%d %d %d",&x,&y,&z);

  result (x,y,z,1,0);
  return 0;
}