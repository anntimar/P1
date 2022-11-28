#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,i;
  int vet[n];
 
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }
 
  for(i = n-1; i >= 0; i--){
    printf("%d ",vet[i]);
  }
  printf("\n");
  return 0;
}