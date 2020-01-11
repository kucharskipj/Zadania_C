#include <stdio.h>

int main()
{
float a, b, c;
printf("Wybierz tryb pracy (1-boki/2-wysokosc): ");
scanf("%f",&a);
if ((int)a == 1)
{
printf("Podaj boki: ");
scanf("%f %f %f",&a, &b, &c);
printf("Pole trojkata to: %.2f\n", (a+b+c)/2);
}
else
{
printf("Podaj podstawe i wysokosc: ");
scanf("%f %f",&a,&b);
printf("Pole trojkata to: %.2f\n", a*b/2);
}
return 0;
}
