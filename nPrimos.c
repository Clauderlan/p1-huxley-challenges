#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int contaDigitos(int n)
{
    if (n <= 0)
        return 0;
    if (n < 10)
        return 1;
    if (n < 100)
        return 2;
    if (n < 1000)
        return 3;
    if (n < 10000)
        return 4;
    if (n < 100000)
        return 5;
    if (n < 1000000)
        return 6;
    if (n < 10000000)
        return 7;
    return 0;
}
int contaDigitosPares(int n, int digitos, int cont)
{
    if (digitos == 0){
        return cont;
    }
    if (n % 2 == 0){
        return contaDigitosPares(n / 10, contaDigitos(n / 10), cont + 1);
    }

    return contaDigitosPares(n / 10, contaDigitos(n / 10), cont);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", contaDigitosPares(n, contaDigitos(n), 0));

    return 0;
}