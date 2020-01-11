#include <stdio.h>
#include "struktury.h"

float obwod(struct trojkat t);

int main()
{
struct trojkat t1;
t1.a=10;
t1.b=5;
t1.c=7;

float obwod(struct trojkat t)
{
float obw;
obw = t.a + t.b + t.c;
return obw;
}

printf("Obwod wynosi %.2f.\n",obwod(t1));
return 0;
}
