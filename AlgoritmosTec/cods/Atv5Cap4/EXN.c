#include <stdlib.h>
#include <stdio.h>

void main(){
    
    float N1, N2, N3, S;

    printf("Insira O PRIMEIRO VALOR:\n");
    scanf("%f", &N1);
    printf("Insira O SEGUNDO VALOR:\n");
    scanf("%f", &N2);
    printf("Insira O TERCEIRO VALOR:\n");
    scanf("%f", &N3);

    S = N1 + N2 + N3;

    if (S >= 100){
        printf("O valor da soma é: %.2f", S);
    } else {
        printf("O valor é menor que 100");
    }

}