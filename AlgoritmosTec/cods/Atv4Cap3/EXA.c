#include <stdio.h>
#include <stdlib.h>

void main(){
   
   float C, F; 
   printf("Insira a temperatura em Celsius: ");
   scanf("%f", &C);
   F = ((C * 9) / 5) + 32;
   printf("Temperatura em Fahrenheit: %.2f °F", F);

}