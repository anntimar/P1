#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
     int v[11]; 
	int i,a=0;

	for (i=0;i<11;i++)
	{
		scanf ("%d",&v[i]);
	}
	for (i=0;i<10;i++)
	{
		if (v[10]==v[i])
			a++;
	}
	printf ("\n\n");
	printf ("%d",a);
	printf ("\n\n");
	
	return 0;
}