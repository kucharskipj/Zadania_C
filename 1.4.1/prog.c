#include <stdio.h>

int main()
{
	int m,n,nkopia;
	printf("Podaj n: ");
	scanf("%d", &n);
	printf("Podaj m: ");
	scanf("%d", &m);
	
	nkopia=0;
	while(nkopia<m && n<m)
	{
		printf("%d\n",nkopia+=n);
	}
	

	return 0;
}
