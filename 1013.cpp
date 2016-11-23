#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int MAIORAB, MAIOR;
    scanf("%d %d %d", &a, &b, &c);
    MAIORAB = ((a+b+abs(a-b))/2);
    MAIOR =((MAIORAB + c +abs(MAIORAB - c))/2);
    printf("%d eh o maior\n", MAIOR);
    return 0;
}
