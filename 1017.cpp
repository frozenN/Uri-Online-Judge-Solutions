#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, velocidade, distancia;
    double gasto;
    scanf("%d %d", &tempo, &velocidade);
    distancia = tempo*velocidade;
    gasto = (distancia/12.0);
    printf("%.3lf\n",gasto);

}
