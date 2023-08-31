#include <stdio.h>
#define NOMES 10

void main(){
    char A[NOMES][20];
    int i;

    printf("Insira o nome de 10 pessoas: \n");
    for (i = 0; i < NOMES; i++)
    {
        scanf("%s", A[i]);
    }

    printf("\nOs nomes digitados foram:\n");
    for (i = 0; i < NOMES; i++)
    {
        printf("%s\n", A[i]);
    }
}