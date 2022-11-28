#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int livros, alunos, c;

    scanf("%d%d", &livros, &alunos);

    c = alunos / livros;

    if(c <= 8)
    {
        printf("A\n");
    }

    else if(c >= 9 && c <= 12)
    {
        printf("B\n");
    }

    else if(c >= 13 && c <= 18)
    {
        printf("C\n");
    }

    else if(c > 18)
    {
        printf("D\n");
    }

    return 0;
}