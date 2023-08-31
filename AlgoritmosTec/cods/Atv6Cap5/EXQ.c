#include <stdio.h>
#include <stdlib.h>

void main(){
    float C, L, AT, AC;
    char Comodo[20], SN;
    
    do
    {
        printf("\nInsira o nome do comodo: ");
        scanf("%s", Comodo);
        printf("\nInsira o comprimento: ");
        scanf("%f", &C);
        printf("\nInsira a largua: ");
        scanf("%f", &L);
        AC = (C*L)/2;
        printf("\nO comodo %s tem %.2fM³.", Comodo, AC);
        AT += AC;
        printf("\nDeseja continuar? ");
        scanf("%s", &SN);

    } while (SN == 'S' || SN == 's');
    printf("\nA residência tem %.2fM³", AT);
    
}