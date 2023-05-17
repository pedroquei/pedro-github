#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float SM, PR, NS;
    printf("Insira o valor do salário mensal: ");
    scanf("%f", &SM);
    printf("Insira o percentual de reajuste: ");
    scanf("%f", &PR);
    NS = SM * (PR / 100) + SM;
    printf("O valor do novo salário é de : %.2f R$ ", NS);

}  