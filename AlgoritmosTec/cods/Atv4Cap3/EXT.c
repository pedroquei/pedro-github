#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float D, T, V;
    printf("Insira a distância percorrida pelo projétil: ");
    scanf("%f", &D);
    printf("Insira o tempo em que foi percorrido: ");
    scanf("%f", &T);
    V = (D*1000)/(T*60);
    printf("A velocidade foi de : %.2f", V);

}  