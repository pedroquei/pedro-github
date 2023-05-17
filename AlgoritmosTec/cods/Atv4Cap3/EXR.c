#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float VA, VB, VC, VBR, VN, VV, TE, PVV, PA, PB, PC, PVN, PBR;
    printf("\n Insira a quantidade de votos do CANDIDATO A: ");
    scanf("%f", &VA);
    printf("\n Insira a quantidade de votos do CANDIDATO B: ");
    scanf("%f", &VB);
    printf("\n Insira a quantidade de votos do CANDIDATO C: ");
    scanf("%f", &VC);
    printf("\n Insira a quantidade de votos BRANCOS: ");
    scanf("%f", &VBR);
    printf("\n Insira a quantidade de votos NULOS:");
    scanf("%f", &VN);
    VV = VA+VB+VC;
    TE = VV+VBR+VN;
    PVV = (VV*100)/TE;
    PA = (VA*100)/TE;
    PB = (VB*100)/TE;
    PC = (VC*100)/TE;
    PVN = (VN*100)/TE;
    PBR = (VBR*100)/TE;
    printf("\n A quantitdade TOTAL de votos foi: %.0f \n", TE);
    printf("\n A quantitdade de votos VÁLIDOS foi %.0f \n", VV);
    printf("O que representa %.2f por cento do total de votos \n", PVV);
    printf("\n A quantitdade de votos BRANCOS foi: %.0f \n", VBR);
    printf("O que representa %.2f por cento do total de votos \n", PBR);
    printf("\n A quantitdade de votos NULOS foi: %.0f \n", VN);
    printf("O que representa %.2f por cento do total de votos \n", PVN);
    printf("\n A quantidade de votos do CANDIDATO A foi de : %.0f \n", VA);
    printf("O que representa %.2f por cento do total de votos \n", PA);
    printf("\n A quantidade de votos do CANDIDATO B foi de : %.0f \n", VB);
    printf("O que representa %.2f por cento do total de votos \n", PB);
    printf("\n A quantidade de votos do CANDIDATO C foi de : %.0f \n", VC);
    printf("O que representa %.2f por cento do total de votos \n", PC);

}  