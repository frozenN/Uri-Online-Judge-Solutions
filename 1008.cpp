#include <stdio.h>

int main(){

int NUMBER;
scanf("%d", &NUMBER);

int HORA;
scanf("%d", &HORA);

double Valor;
scanf("%lf", &Valor);

double SALARY;
SALARY = (HORA*Valor);
printf("NUMBER = %d\n", NUMBER);
printf("SALARY = U$ %.2lf\n", SALARY);

return(0);
}
