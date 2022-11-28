#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    
 
int mdc(int a, int b){
        if(a%b==0)
        return b;
        
        else{
            return mdc(b,(a%b));
        }
    }
    int main(){
        int n1, n2, resp;
        scanf("%d %d",&n1, &n2);
        resp=mdc(n1,n2);
        printf("%d",resp);
        
        return 0;
}
    
    
    
    
