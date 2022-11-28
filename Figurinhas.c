#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n,i,j,aux;
	int imp = 0,par = 0,contp = 0,conti = 0;

	scanf("%d",&n);

	int array[n];

	for(i = 0;i < n;i++)
	{
		scanf("%d",&array[i]);
	}

	for(i = 0;i < n;i++)
	{
		for(j = i + 1;j < n;j++)
		{
			if(array[i] > array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}


	for(i = 0;i < n;i++)
	{
		if(array[i] != array[i + 1])
		{
			if(array[i] % 2 == 0)
			{
				par += array[i];
				
			}
			else
			{
				imp += array[i];
				
			}
		}

		if(array[i] % 2 == 0)
		{
			contp++;
		}
		if(array[i] % 2 == 1)
		{
			conti++;
		}
	}

	printf("%d\n%d\n",contp,conti);
	
	if(par > imp)
	{
		printf("%d\n",par);
	}
	else
	{
		printf("%d\n",imp);
	}

	return 0;
}