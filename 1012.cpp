#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;
    double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    float pi;
    pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);


//Area Triangulo
    TRIANGULO = ((A*C)/2);
    CIRCULO = (pi*pow (C, 2.0));
    TRAPEZIO = (((A+B)*C)/2);
    QUADRADO = pow (B, 2.0);
    RETANGULO = (A*B);
//Saidas
    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);

    return 0;

}

