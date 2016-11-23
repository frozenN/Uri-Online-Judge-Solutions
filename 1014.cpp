#include <stdio.h>
#include <stdlib.h>

int main()
{
   int X;
   double Y, RAZAO; //combustivel gasto
   scanf("%d", &X);
   scanf("%lf", &Y);
   RAZAO = (X/Y);
   printf("%.3lf km/l\n", RAZAO);
   return 0;


}
