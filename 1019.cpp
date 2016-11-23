#include <stdio.h>

int main()
{
    int N, N1, N2;
    int minutos, horas, segundos;
    scanf("%d", &N);
    horas = (N/3600);
    N1 = (N - (horas*3600));
    minutos = (N1/60);
    N2 = (N1 - (minutos*60));
    printf("%d:%d:%d\n", horas, minutos, N2);
    return 0;
}
