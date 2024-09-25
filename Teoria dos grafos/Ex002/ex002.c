#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char* data;
    struct Node* left;
    struct Node* right;
} Node;

Node* newNode(char* data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void printInOrder(Node* node) {
    if (node == NULL)
        return;
    if (node->left != NULL)
        printf("(");
    printInOrder(node->left);
    printf("%s", node->data);
    printInOrder(node->right);
    if (node->right != NULL)
        printf(")");
}

int main() {
    Node* root = newNode("-");
    root->left = newNode("*");
    root->right = newNode("y");
    root->left->left = newNode("+");
    root->left->right = newNode("x");
    root->left->left->left = newNode("y");
    root->left->left->right = newNode("x");

    printf("Fórmula Matemática: ");
    printInOrder(root);
    printf("\n");

    return 0;
}