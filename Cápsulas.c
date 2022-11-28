#include <stdio.h>


int total_capsulas (int i)
{
    // printf("entrando em total_capsulas i=%d\n", i);
    
    if (i == 7)
    {
        return 0;
    }
    else
    {
        int quantidade;
        char tamanho;

        scanf("%d\n %c", &quantidade, &tamanho);

        // printf(">>>>>>>>> %d\n", quantidade);
        // printf(">>>>>>>>>> %c\n", tamanho);

        if (tamanho == 'p' || tamanho == 'P'){

            return quantidade * 10 + total_capsulas(i + 1);
        
        }

        if (tamanho == 'g' || tamanho == 'G'){

            return quantidade * 16 + total_capsulas(i + 1);
        }
    }
}


int main ()
{
    int total;
    
    total = total_capsulas(0);
    
    printf("%d\n%d\n", total, ((total*2)/7));

    return 0;
}


