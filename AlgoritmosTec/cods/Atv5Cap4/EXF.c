#include <stdlib.h>
#include <stdio.h>

void main(){
    
    float N1, N2, N3;

    printf("Insira O PRIMEIRO VALOR:\n");
    scanf("%f", &N1);
    printf("Insira O SEGUNDO VALOR:\n");
    scanf("%f", &N2);
    printf("Insira O TERCEIRO VALOR:\n");
    scanf("%f", &N3);

    if ( N1 <= N2 && N1 <= N3 && N2 <= N3){
        printf("\n Ordem crescente: %.2f, %.2f, %.2f", N1,N2,N3);
    } else if(N1 <= N2 && N1 <= N3 && N3 <= N2){
        printf("\n Ordem crescente: %.2f, %.2f, %.2f", N1,N3,N2);
    } else if (N2 <= N1 && N2 <= N3 && N1 <= N3){
        printf("\n Ordem crescente: %.2f, %.2f, %.2f", N2,N1,N3);
    } else if (N2 <= N1 && N2 <= N3 && N3 <= N1){
        printf("\n Ordem crescente: %.2f, %.2f, %.2f", N2,N3,N1);
    } else if(N3 <= N1 && N3 <= N2 && N1 <= N2){
        printf("\n Ordem crescente: %.2f, %.2f, %.2f", N3,N1,N2);
    } else if (N3 <= N1 && N3 <= N2 && N2 <= N1 ){
        printf("\n Ordem crescente: %.2f, %.2f, %.2f", N3,N2,N1);
    }
    
}