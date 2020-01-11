#include <stdio.h>
#include <math.h>

int main()
{
float a,b;
printf("Wybierz typ figury(1-kwadrat,2-prostokat,3-trojkat): ");
scanf("%f",&a);
switch ((int)a)
{
case 1:
printf("Podaj dlugosc boku: ");
scanf("%f",&a);
b=2.0*a;
break;
case 2:
printf("Podaj dlugosci bokow: ");
scanf("%f %f",&a, &b);
a=2.0*a;
break;
case 3:
printf("Podaj dlugosc podstawy i wysokosc: ");
scanf("%f %f", &a, &b);
break;
}
printf("Pole figury to: %.2f\n",a*b/2.0);
return 0;
}
