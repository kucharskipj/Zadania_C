#include <stdio.h>

int main()
{
int a;
printf("Podaj liczbe: ");
scanf("%d",&a);
if (a<0)
printf("Wartosc bezwzgledna podanej liczby to: %d\n", -1*a);
else
printf("%d\n", a);
return 0;
}
