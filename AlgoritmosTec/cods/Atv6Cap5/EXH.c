#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int E, B, R = 1;
    printf("Insira a base: ");
    scanf("%d", &B);
    printf("Insira o expoente: ");
    scanf("%d", &E);
    for(int i = 1; i <= E ; i++){
        R *= B;    
    }

    printf(" %d elevado a %d é %d \n", B, E, R);

}