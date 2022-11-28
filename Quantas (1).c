#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void input(int a[],int n , int i);

int checkIndex(int i, int n, int a[]);

int check(int i, int n, int a[], int count);

int main()
{
    int x;
    scanf("%d", &x);
    int a[x + 1];
    input(a, x, 0);
    check(0, x, a, 0);
    return 0;
}

void input(int a[],int n , int i)
{
    if (i < n)
    {
        int x;
        scanf("%i", &x);
        a[i] = x;
        input(a, n, (i + 1));
    }
}

int check(int i, int n, int a[], int count)
{
    if (i == n)
    {
        printf("%d\n", count);
        return 0;
    }
    if (a[i] == n)
    {
        count++;
        return check(checkIndex(0, n, a), n, a, count);
    }
    int aux = a[i];
    a[i] = n;
    return check(aux, n, a, count);
}

int checkIndex(int i, int n, int a[])
{
    if (i == n)
    {
        return i;
    }
    if (a[i] != n)
    {
        return i;
    }
    return checkIndex(i + 1, n, a);
}
