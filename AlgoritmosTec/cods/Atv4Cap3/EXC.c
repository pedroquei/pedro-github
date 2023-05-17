#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
   
   float V, H, R; 
   printf("Insira a ALTURA da garrafa: ");
   scanf("%f", &H);
   printf("Insira o RAIO da garrafa: ");
   scanf("%f", &R);
   V = 3.14159 * pow(R, 2) * H;
   printf("O VOLUME da garrafa é: %.2f ", V);

}