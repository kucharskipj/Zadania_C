#include <stdio.h>
#include <string.h>

int main()
{
char dzialanie[20];
printf("Podaj dzialanie: ");
scanf("%s",dzialanie);
if (strstr(dzialanie,"+") != NULL) printf("%s",strtok (dzialanie,"+"));
//printf("Wynik to: %.2f\n",wynik);
return 0;
}
