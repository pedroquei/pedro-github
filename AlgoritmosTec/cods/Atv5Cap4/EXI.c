#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>

void main(){
    
    int N, MA, ME, i = 1 ;
    bool Leitura = true;

    while ( N <= 5 ){

        printf("Insira o %dº valor: ", i);
        scanf("%d", &N);

        if (Leitura == true)
        {
            ME = N;
            MA = N;
        }
        Leitura = false;
        
        if (N >= MA){
            MA = N;
        }
        if (N <= ME){
            ME = N;
        }

        i++;
    }
    
        



   printf("Menor valor: %d Maior valor: %d", ME, MA);

}