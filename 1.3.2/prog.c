#include <stdio.h>

int main()
{
int a, b;
printf("Podaj pierwsza liczbe: ");
scanf("%d",&a);
printf("Podaj druga liczbe: ");
scanf("%d",&b);
if (a<b)
printf("Wieksza liczba: %d\n", b);
else
printf("%d\n", a);
return 0;
}
