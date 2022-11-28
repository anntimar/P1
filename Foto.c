#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(float a[], int prim, int seg)
{
    float temp = a[prim];
    a[prim] = a[seg];
    a[seg] = temp;

    return;
}

void bubble(float a[], int pos, int size)
{
    if(pos == size)
    {
        return;
    }
    else
    {
        if(a[pos] > a[pos+1])
        {
            swap(a, pos, pos+1);
        }
    }

    bubble(a, pos+1, size);

}

void chamabubble(float a[], int size, int tam)
{
    if(tam-1 == 0)
    {
        return;
    }
    else
    {
        bubble(a, 0, size);
    }
    
    chamabubble(a, size, tam-1);
}


int main()
{
    float n1, n2, n3, n4;
    float a[4];
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    a[0] = n1;
    a[1] = n2;
    a[2] = n3;
    a[3] = n4;
    
    chamabubble(a, 4-1, 4);
    
    printf("%.2f\n%.2f\n%.2f\n%.2f", a[0], a[2], a[3], a[1]);
}