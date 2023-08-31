#include <stdlib.h>
#include <stdio.h>

void main(){
    
    char NOME[15], SEXO;

    printf("Insira seu nome: ");
    gets(NOME);
    printf("Digite o sexo: M/F: ");
    SEXO = getchar();

    if (SEXO == 'M'){
        printf("IImo. Sr. %s", NOME);
    } else if (SEXO == 'F') {
        printf("IIma Sra. %s", NOME);
    } else {
        printf("Sexo informado inválido.");
    }

}