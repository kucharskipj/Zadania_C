#include <stdio.h>

int main()
{
int a,b,c;
printf("Wpisz pierwsza liczbe: ");
scanf("%d", &a);
printf("Wpisz druga liczbe: ");
scanf("%d", &b);
printf("Wpisz trzecia liczbe: ");
scanf("%d", &c);
printf("Srednia arytmetyczna liczb: %.2f\n", ((float)a+b+c)/3);
return 0;
}
