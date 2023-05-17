#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
   
   float V, T, D, LU; 
   printf("Insira a VELOCIDADE MÉDIA do automóvel (Km/H): ");
   scanf("%f", &V);
   printf("Insira o Tempo da viagem (Em Horas): ");
   scanf("%f", &T);
   D = T * V ;
   LU = D / 12 ;
   printf("A VELOCIDADE MÉDIA foi de: %.2f \n ", V);
   printf("O TEPO GASTO foi de: %.2f \n ", V);

}