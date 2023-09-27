#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int pilha[TAM];
int C;

void push(int f[], int dado, int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        if (f[i] == 0){
            f[i] = dado;
            return;
        }
    }   

    printf("\nValor não inserido, a pilha está cheia\n");
}


void listar(int f[], int tamanho){
    int i;
    printf("\n\nListando a pilha\n\n");
    for (i = tamanho - 1; i >= 0; i--){
        if (f[i] != 0)
        {
            printf("%d ",f[i]);
        }
    }
}

 int buscar( int f[], int tamanho, int chave){
    int i;
    for (i = tamanho - 1; i >= 0; i--){
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
        printf("Informe o valor: ");
        scanf("%d",&leitura);
        if (leitura == 0)
            break;
        push(pilha,leitura,TAM);
    }

    listar(pilha,TAM);

    printf("\n\nQual chave deseja buscar? ");
    scanf("%d",&C);

    int VC = buscar(pilha,TAM,C);
    if (VC != -1){
        printf("\nChave encontrada no índice %d\n", VC);
    } else {
        printf("\nChave não encontrada\n");
    }

    return (EXIT_SUCCESS);
}