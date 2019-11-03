#include <stdio.h>

int main()
{
int a;
printf("Wpisz liczbe: ");
scanf("%d", &a);
printf("Wpisano liczbe: %d(dec), %x(hex), %c(char) \n", a, a, a);
return 0;
}
