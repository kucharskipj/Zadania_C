#include <stdio.h>
#include "struktury.h"

void przypisz(struct trojkat troj1, struct trojkat *troj2)
{
troj2->a=troj1.a;
troj2->b=troj1.b;
troj2->c=troj1.c;
}

int main()
{
struct trojkat t1={10,5,7}, t2={1,1,1}, *wt=&t2;

printf("t2: %.2f %.2f %.2f\nprzypisz...\n", t2.a, t2.b, t2.c);
przypisz(t1,wt);
printf("t2: %.2f %.2f %.2f\n",t2.a, t2.b, t2.c);
return 0;
}
