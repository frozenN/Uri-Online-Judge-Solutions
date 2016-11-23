#include <stdio.h>
#include <math.h>

int main()
{
    double pi;
    double VOLUME;
    int R;
    scanf("%d", &R);
    pi = 3.14159;
    VOLUME = (4.0/3)* pi * pow (R, 3.0);
    printf("VOLUME = %.3lf\n", VOLUME);
    return 0;

}
