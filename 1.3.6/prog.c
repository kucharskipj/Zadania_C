#include <stdio.h>

int main()
{
float a, b, c, d, w, x;
printf("Podaj cztery wspolczynniki i dwa wyrazy wolne (x1, y1, x2, y2, w1, w2)\n");
scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&w,&x);
if ((a*c)+(b*d) == 0) printf("Uklad sprzeczny lub nieoznaczony\n");
else
{
printf("x=%.2f y=%.2f\n", ((w*d)+(x*b))/((a*c)+(b*d)), ((a*x)+(c*w))/((a*c)+(b*d)));
}
return 0;
}
