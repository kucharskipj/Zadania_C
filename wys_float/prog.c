#include <stdio.h>

int main()
{
	float pi = 3.141592653;
	printf("pi=[%%d] %d\n",(int)pi);
	printf("pi=[%%f] %f\n",pi);
	printf("pi=[%%10.8f] %10.8f\n",pi);
	printf("pi=[%%10.2f] %10.2f\n",pi);

	return 0;
}
