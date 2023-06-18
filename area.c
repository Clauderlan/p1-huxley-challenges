
#include <stdio.h>

int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Area do triangulo : %.3lf\n", a*c/2);
    printf("Area do circulo : %.3lf\n", 3.14159 * (c*c));
    printf("Area do trapezoid : %.3lf\n", (a+b) * c / 2);
    printf("Area do square : %.3lf\n", b*b);
    printf("Area do retangulo : %.3lf\n", a*b);

    return 0;

}