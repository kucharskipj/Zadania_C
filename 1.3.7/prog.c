#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c;
printf("Podaj wspolczynniki a, b, c rownania kwadratowego: ");
scanf("%f %f %f",&a,&b,&c);
if (b*b<(4.0*a*c))
printf("Brak rozwiazan w zbiorze liczb rzeczywistych\n");
else
printf("x1=%.2f x2=%.2f\n",(-b-sqrt(b*b-(4.0*a*c)))/(2.0*a),(-b+sqrt(b*b-(4.0*a*c)))/(2.0*a));
return 0;
}
