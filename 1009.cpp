#include <stdio.h>

int main()
{

    scanf("%*s");

    double Fixo;
    scanf("%lf", &Fixo);

    double Vendas;
    scanf("%lf", &Vendas);

    double TOTAL;
    TOTAL = Fixo + (0.15*Vendas);

    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}
