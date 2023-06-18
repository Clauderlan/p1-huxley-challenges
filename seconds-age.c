
#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade para analise : \n");
    scanf("%d", &idade);

    double idadeS = idade * 31.536;
    printf("Idade em segundos : %lf", idadeS);
    return 0;

}