#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
     
    float notaa, notab, notac, media;
    
    scanf("%f %f %f", &notaa, &notab, &notac);
    
    media= ((notaa*2) + (notab*3) + (notac*5)) /10;
    
  
    printf ("MEDIA = %.1f", media);
    
	return 0;
}