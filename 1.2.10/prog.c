#include <stdio.h>
#include <stdlib.h>

int main()
{
float a;
printf("Podaj liczbe: ");
scanf("%f",&a);
a=abs(a);
printf("Wartosc bezwzgledna z podanej liczby wynosi: %f\n", a);
return 0;
}
