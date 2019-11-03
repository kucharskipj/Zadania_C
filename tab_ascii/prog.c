#include <stdio.h>

int main()
{
	int x;
	printf("Wyswietlam kolejne znaki ASCII\n");

	for(x=20;x<255;x++)
	{
		printf("%3d %c   ", x, x);
		if(!(x%10))
		printf("\n");
	}
	return 0;
}
