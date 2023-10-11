#include <stdio.h>
#include <stdlib.h>

#define TAM 5
typedef struct SFila{
    int fila[TAM];
    int inicio;
    int fim;
}TFila;

TFila fila;

void enqueue(int dado, int tamanho){
    if((fila.fim != -1) && ((fila.fim+1)%tamanho) == fila.inicio){
        printf("\n A fila está cheia");
        return;
    }
    fila.fim = (fila.fim + 1)%tamanho;
    fila.fila[fila.fim] = dado;
}

void dequeue(int tamanho){
    fila.inicio = ((fila.inicio+1)%tamanho);
}

void listar(int tamanho){
    int i = fila.inicio;
    do{
        printf("\n %d", fila.fila[i]);
        i = ((i+1)%tamanho);
    }while(i != (fila.fim + 1)%tamanho);
}

int buscar(int key, int tamanho){
    int i = fila.inicio;
    do{
        if (fila.fila[i] == key){
            return i;
        }
        i = ((i+1)%tamanho);
    }while(i != (fila.fim + 1)%tamanho);
    return -1;
}

void main(int argc, char *agrv){
    
    int leitura, chave;
    fila.inicio = 0;
    fila.fim = -1;
    
    while(1){

        printf("\n Insira um número na FILA: ");
        scanf("%d", &leitura);
        if(leitura == 0){
            break;
        }
        enqueue(leitura, TAM);
    }
    
    listar(TAM);
    //dequeue(TAM);
    //dequeue(TAM);
    printf("\n Qual chave desejas buscar? ");
    scanf("%d", &chave);
    if (buscar(chave, TAM) == -1){
        printf("\nChave não econtrada!");
    } else { 
        printf("\nChave encontrada no índice %d", buscar(chave, TAM));
    }
}
