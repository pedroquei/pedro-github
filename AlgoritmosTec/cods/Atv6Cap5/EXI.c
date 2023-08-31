#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int ANTERIOR = 0, ATUAL = 1, PROXIMO;
    for(int i = 1; i <= 15 ; i++){
        printf("%d ", ANTERIOR);
        PROXIMO  = ANTERIOR + ATUAL;
        ANTERIOR = ATUAL;
        ATUAL = PROXIMO;
    }
}