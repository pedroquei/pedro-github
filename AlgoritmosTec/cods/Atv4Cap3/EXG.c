#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float A, B, C, D, N1, N2, N3, N4, N5, N6, N7, N8, N9, N10, N11, N12;
    printf("Insira o valor de A: ");
    scanf("%f", &A);
    printf("Insira o valor de B: ");
    scanf("%f", &B);
    printf("Insira o valor de C: ");
    scanf("%f", &C);
    printf("Insira o valor de D: ");
    scanf("%f", &D);
    N1 = A + B;
    N2 = A * B;
    N3 = A + C;
    N4 = A * C;
    N5 = A + D;
    N6 = A * D;
    N7 = B + C;
    N8 = B * C;
    N9 = B + D;
    N10 = B * D;
    N11 = C + D;
    N12 = C * D;
    printf("Os valores das combinações são: %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f" , N1, N2, N3, N4, N5, N6, N7, N8, N9, N10, N11, N12);

}