#include <stdio.h>

int main()
{
    int N, N1, N2, N3, N4, N5, N6;
    int um, dois, cinco, dez, vinte, cinquenta, cem;
    scanf("%d", &N);
    cem = (N/100);
    N1 = N - (cem*100);
     //N1 É O DINHEIRO QUE FALTA
    cinquenta = (N1/50);
    N2 = N1 - (cinquenta*50);
    vinte = (N2/20);
    N3 = N2 - (vinte*20);
    dez = (N3/10);
    N4 = N3 - (dez*10);
    cinco = (N4/5);
    N5 = N4 - (cinco*5);
    dois = (N5/2);
    N6 = N5 - (dois*2);
    um = N6;

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta );
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    return 0;


}
