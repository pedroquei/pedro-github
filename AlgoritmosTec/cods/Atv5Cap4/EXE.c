#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main(){

    float a, b, c, X1, X2, D;
    printf("Insira o valor de A:");
    scanf("%f",&a);
    printf("Insira o valor de b:");
    scanf("%f",&b);
    printf("Insira o valor de c:");
    scanf("%f",&c);
    D = pow(b,2) - (4*a*c);
    if (D > 0){
      X1 = ( (-b) + (sqrt(D)) ) / (2*a);
      X2 = ( (-b) - (sqrt(D)) ) / (2*a);  
      printf("Delta igua a: %.2f , X1 = %.2f e X2= %.2f ", D, X1, X2);
    } else if (D < 0){
        printf("Delta igual a: %.2f , Não há solução real para a equação!", D);
    } else if (D == 0){
        X1 = ( (-b) + (sqrt(D)) ) / (2*a);
        printf("Delta igua a: %.2f e X = %.2f ", D, X1);
    }

}