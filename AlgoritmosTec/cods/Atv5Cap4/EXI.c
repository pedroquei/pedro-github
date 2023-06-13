#include <stdlib.h>
#include <stdio.h>

void main(){
    
    int N[5], MA, ME;

    for ( int i = 1 ; i <= 5 ; i++ ){
        ME = N[1];
        printf("Insira o %dº valor: ", i);
        scanf("%d", &N[i]);
        if (N[i] >= MA){
            MA = N[i];
        }
        if (N[i] <= ME){
            ME = N[i];
        }
    }

   printf("Menor valor: %d Maior valor: %d", ME, MA);

}