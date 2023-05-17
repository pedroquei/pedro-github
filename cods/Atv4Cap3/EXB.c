#include <stdio.h>
#include <stdlib.h>

void main(){
   
   float C, F; 
   printf("Insira a temperatura em Fahrenheit: ");
   scanf("%f", &F);
   C = ( F - 32 ) * 5 / 9 ;
   printf("Temperatura em Celsius: %.2f °C", C);

}