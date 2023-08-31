#include <stdlib.h>
#include <stdio.h>

void main(){
    
    int N1, N2, N3, N4;

    printf("Insira O PRIMEIRO VALOR:\n");
    scanf("%d", &N1);
    printf("Insira O SEGUNDO VALOR:\n");
    scanf("%d", &N2);
    printf("Insira O TERCEIRO VALOR:\n");
    scanf("%d", &N3);
    printf("Insira O QUARTO VALOR:\n");
    scanf("%d", &N4);

    if (((N1 % 2) == 0 && (N1 % 3) == 0) || ((N2 % 2) == 0 && (N2 % 3) == 0) || ((N3 % 2) == 0 && (N3 % 3) == 0) || ((N4 % 2) == 0 && (N4 % 3) == 0)){
        printf("os números que são divisíveis por 2 e 3 são:\n");
        if ((N1 % 2) == 0 && (N1 % 3) == 0){
            printf("%.d", N1);
        }
        if ((N2 % 2) == 0 && (N2 % 3) == 0){
            printf("%.d", N2);
        }
        if ((N3 % 2) == 0 && (N3 % 3) == 0){
            printf("%.d", N3);
        }
        if ((N4 % 2) == 0 && (N4 % 3) == 0){
            printf("%.d", N4);
        }
    } else {
        printf("Nenhum dos números é divispivel por 2 e por 3.");
    }
}