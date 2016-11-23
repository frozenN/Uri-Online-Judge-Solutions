#include <stdio.h>

int main()
{
    int Codigo, Codigo2, Quantidade, Quantidade2;
    double PrecoPP, PrecoPP2, TOTAL;
    scanf("%d %d %lf",&Codigo,&Quantidade, &PrecoPP);
    scanf("%d %d %lf",&Codigo2,&Quantidade2, &PrecoPP2);
    TOTAL = ((Quantidade*PrecoPP) + (Quantidade2*PrecoPP2));
    printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
    return(0);
}
