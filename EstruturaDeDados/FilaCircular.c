#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int fila[TAM];
int C, IA = 0;

void enqueue(int f[], int dado, int tamanho){
    int i;
    IA++;
    if (IA == tamanho){
        IA = 0;
    }else{
        for (i = 0; i < tamanho; i++){
            
            if (f[i] == 0){
                f[i] = dado;
                return;
            } else {
                f[IA] = dado;
                return;
            }
        }
    } 

}


void listar(int f[], int tamanho){
    int i;
    printf("\n\nListando a fila\n\n");
    for (i = 0; i < tamanho;i++){
        if (f[i] != 0)
        {
            printf("%d ",f[i]);
        }
    }
}

 int buscar( int f[], int tamanho, int chave){
    int i;
    for (i = 0; i < tamanho; i++){
        if (f[i] == C){
            return i;
            break;
        }
    }
    printf("\nValor não encontrado\n");
    return -1;

 }

int main(int argc, char** argv) {
    int leitura;

    while (1){
        printf("indice atual : %d\n", IA);
        printf("Informe o valor: ");
        scanf("%d",&leitura);
        if (leitura == 0)
            break;
        enqueue(fila,leitura,TAM);
    }

    listar(fila,TAM);

    printf("\n\nQual chave deseja buscar? ");
    scanf("%d",&C);

    int VC = buscar(fila,TAM,C);
    if (VC != -1){
        printf("\nChave encontrada no índice %d\n", VC);
    } else {
        printf("\nChave não encontrada\n");
    }

    return (EXIT_SUCCESS);
}