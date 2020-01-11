#include <stdio.h>
#include <math.h>

int main()
{
float a;
printf("Podaj liczbe nieujemna: ");
scanf("%f",&a);
a=pow(a,0.5);
printf("Pierwiastek z podanej liczby wynosi: %f"\n, a);
return 0;
}
