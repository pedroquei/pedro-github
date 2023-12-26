#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top = NULL;

void push(int data) {
    Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    temp->data = data; 

    if (top == NULL) {
        top = temp;
        top->next = top;
    } else {
        temp->next = top->next;
        top->next = temp;
        top = temp;
    }
}

void pop() {
    Node* temp;
    if (top == NULL) {
        printf("\nA pilha está vazia\n");
    } else {
        temp = top->next;
        if (top == top->next) {
            top = NULL;
        } else {
            top->next = temp->next;
        }
        printf("\nElemento excluído: %d", temp->data);
        free(temp);
    }
}

void display() {
    Node* temp;
    temp = top;
    if (top == NULL) {
        printf("\nA pilha está vazia\n");
    } else {
        do {
            temp = temp->next;
            printf("%d ", temp->data);
        } while (temp != top);
    }
}

int main() {
    int choice, data;
    while (1) {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Quit\n");
        printf("\nDigite sua escolha: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("\nDigite o elemento a ser inserido: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nOpção inválida\n");
        }
    }
    return 0;
}
