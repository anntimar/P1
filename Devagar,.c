#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
	double via,veic;
	
	scanf("%lf\n%lf",&via,&veic);

	if(veic>via && veic<=(0.2*via+via))
	
	printf("85.13\n4");
		
	else if(0.2*via+via<veic && veic<=0.5*via+via)
	
	printf("127.69\n5");
	
	else if(veic>0.5*via+via)
	
	printf("574.62\n7");
		
	else if(veic<=via)
	
	printf("0.00\n0");

	return 0;
}