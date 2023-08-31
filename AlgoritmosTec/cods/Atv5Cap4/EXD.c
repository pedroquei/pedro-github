#include <stdlib.h>
#include <stdio.h>

void main(){
    float N1, N2, N3, N4, NE, MD1, MD2;

    printf("Insira a nota 1 do aluno:\n");
    scanf("%f", &N1);
    printf("Insira a nota 2 do aluno:\n");
    scanf("%f", &N2);
    printf("Insira a nota 3 do aluno:\n");
    scanf("%f", &N3);
    printf("Insira a nota 4 do aluno:\n");
    scanf("%f", &N4);
    
    MD1 = (N1+N2+N3+N4)/4;

    if (MD1 >= 7){
        printf("\n O aluno foi aprovado, sua média é: %.2f", MD1);
    } else {
        printf("Insira a nota 5 (Nota de Exame)");
        scanf("%f", &NE);
        MD2 = (N1+NE)/2;
        if (MD2>= 5)
        {
            printf("\n Aluno aprovado em exame, sua média é: %.2f", MD2);
        } else {
           printf("\n Aluno reprovado, sua média é: %.2f", MD2);   
        }
        
    }

}