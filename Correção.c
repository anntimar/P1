#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void input(char a[], int n, char g[], double QA, double TA, int ac[], int i, int count[]);
void correction(char g[], char res[], int n, int tg, int i, int cont);
int check(char g[], char res[], int n, int tg, int i, int cont);
void repeated(double max, int ac[], int count[], int i, double resF);

int main()
{
    char a[10000];
    char g[11];
    int ac[11];
    int count[11];

    scanf("%s", g);
    input(a, 0, g, 0, 0, ac, 0, count);
    return 0;
}

void input(char a[], int n, char g[], double QA, double TA, int ac[], int i, int count[])
{
    scanf("%d", &n);
    if (n == 9999)
    {
        printf("%.1lf%%\n", QA / TA * 100);
        repeated(0, ac, count, 0, 0);
        return;
    }
    scanf(" %s", a);
    correction(g, a, n, 10, 0, 0);

    if (check(g, a, n, 10, 0, 0) >= 6)
    {
        QA++;
    }

    count[i] = check(g, a, n, 10, 0, 0);
    if (count[i] == 0)
        ac[0] += 1;
    else if (count[i] == 1)
        ac[1] += 1;
    else if (count[i] == 2)
        ac[2] += 1;
    else if (count[i] == 3)
        ac[3] += 1;
    else if (count[i] == 4)
        ac[4] += 1;
    else if (count[i] == 5)
        ac[5] += 1;
    else if (count[i] == 6)
        ac[6] += 1;
    else if (count[i] == 7)
        ac[7] += 1;
    else if (count[i] == 8)
        ac[8] += 1;
    else if (count[i] == 9)
        ac[9] += 1;
    else if (count[i] == 10)
        ac[10] += 1;

    input(a, 0, g, QA, TA + 1, ac, i + 1, count);
}

void correction(char g[], char res[], int n, int tg, int i, int cont)
{
    if (i == tg)
    {
        printf("%d %.1lf\n", n, (double)cont);
        return;
    }
    if (g[i] == res[i])
        cont++;

    correction(g, res, n, tg, i + 1, cont);
}



int check(char g[], char res[], int n, int tg, int i, int cont)
{
    if (i == tg)
    {
        return cont;
    }
    if (g[i] == res[i])
    {
        cont++;
    }
    check(g, res, n, tg, i + 1, cont);
}


void repeated(double max, int ac[], int count[], int i, double resF)
{
    if (i == 11)
    {
        printf("%.1lf\n", resF);
        return;
    }
    if (ac[i] > max)
    {
        max = ac[i];
        resF = i;
    }
    repeated(max, ac, count, i + 1, resF);
}
