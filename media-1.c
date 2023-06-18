#include <stdio.h>

int main(){

    double valor1, valor2 = 0;
    printf("Digite os 2 valores : \n");

    scanf("%lf %lf", &valor1, &valor2);
    valor1 *= 3.5;
    valor2 *= 7.5;

    printf("Média total : %.5lf", valor1+valor2/11);
    return 0;

}