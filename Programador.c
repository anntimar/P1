#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop(int dia, int media_programas, int media_linhas, int dia_mais_produziu, int mais_linhas) {
    if (dia > 7) {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", media_programas);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", media_linhas);
        if (dia_mais_produziu == 1) {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        }
        else if (dia_mais_produziu == 2) {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        else if (dia_mais_produziu == 3) {
            printf("DIA QUE MAIS PRODUZIU: TERCA\n");
        }
        else if (dia_mais_produziu == 4) {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        else if (dia_mais_produziu == 5) {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        else if (dia_mais_produziu == 6) {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        else if (dia_mais_produziu == 7) {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }
    }
    else {
        int programas, linhas;
        scanf("%d %d", &programas, &linhas);
        if (programas >= 5) {
            media_programas++;
        }
        if (linhas >= 100) {
            media_linhas++;
        }
        if (linhas >= mais_linhas) {
            mais_linhas = linhas;
            dia_mais_produziu = dia;
        }
        loop(dia+1, media_programas, media_linhas, dia_mais_produziu, mais_linhas);
    }
}
 
int main() {
    loop(1, 0, 0, 0, 0);
    return 0;
}