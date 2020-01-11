#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b;
printf("Podaj pierwsza liczbe: ");
scanf("%d",&a);
printf("Podaj druga liczbe: ");
scanf("%d",&b);
if (abs(a)<abs(b))
printf("Wieksza wartosc bezwzgledna: %d\n", b);
else
printf("%d\n", a);
return 0;
}
