#include <stdlib.h>
#include <stdio.h>

void main(){
    float N1, N2, N3, N4, M;

    printf("Insira a nota 1 do aluno:\n");
    scanf("%f", &N1);
    printf("Insira a nota 2 do aluno:\n");
    scanf("%f", &N2);
    printf("Insira a nota 3 do aluno:\n");
    scanf("%f", &N3);
    printf("Insira a nota 4 do aluno:\n");
    scanf("%f", &N4);
    
    M = (N1+N2+N3+N4)/2;

    if (M >= 5){
        printf("\n O foi aprovado, sua média é: %.2f", M);
    } else {
        printf("\n O foi reprovado, sua média é: %.2f", M);
    }

}