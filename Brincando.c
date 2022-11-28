#include <stdio.h>
#include <limits.h>

#define LINHAS 3
#define COLUNAS 3

void lermatriz(int m[LINHAS][COLUNAS], int l, int c){

	int i, j;
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			scanf("%d", &m[i][j]);
		}
	}
}

float media(int m[LINHAS][COLUNAS], int l, int c){
	float soma = 0;
	int i, j;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			soma += m[i][j];
		}
	}
	return (soma / (float)(l * c));
}

int maior(int m[LINHAS][COLUNAS], int l, int c){
	float mamata = INT_MIN;
	int i, j;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (m[i][j] > mamata)
			{
				mamata = m[i][j];
			}
		}
	}
	return mamata;
}

int prince(int m[LINHAS][COLUNAS], int l, int c){
	int perla = 0, i, j;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i == j)
			{
				perla += m[i][j]; 
			}
		}
	}
	return perla;	
}

int main()
{
	int matriz[LINHAS][COLUNAS];
	lermatriz(matriz, 3, 3);

	int delta = 0, mm = maior(matriz, 3, 3); 
	int pericles = prince(matriz, 3, 3);
	float zezin = media(matriz, 3, 3);
	
	if (mm > 0)
	{
		delta = 1;
	}
	else if (mm < 0)
	{
		delta = -1;
	}

	printf("%.2f %d %d %d\n", zezin, mm, delta, pericles);
	return 0;
}