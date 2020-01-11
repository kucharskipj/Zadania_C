#include <stdio.h>

int main()
{
int a, b, c;
printf("Podaj pierwsza liczbe: ");
scanf("%d",&a);
printf("Podaj druga liczbe: ");
scanf("%d",&b);
printf("Podaj trzecia liczbe: ");
scanf("%d",&c);

printf("Wieksza liczba: ");
if (a<b)
{
	if (b<c)
	printf("%d\n", c);
	else
	printf("%d\n",b);
}
else
{
	if (a<c)
	printf("%d\n",c);
	else
	printf("%d\n",a);
}
return 0;
}
