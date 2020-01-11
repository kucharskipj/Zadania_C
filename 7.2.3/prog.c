#include <stdio.h>
#include "struktury.h"
#include <math.h>

float odl(struct punkt p1, struct punkt p2)
{
	return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)+pow(p1.z-p2.z,2));
}

float min_odl(struct punkt tab[], int n)
{
	float min = odl(tab[0], tab[1]), tmp;
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			tmp=odl(tab[j],tab[i]);
			if(tmp<min) min=tmp;
		}
	}
	return min;
}


int main()
{
struct punkt t[]={{1,1,1},{3,3,3},{5,5,5},{3,3,2}};
printf("%.2f\n",min_odl(t,4));
return 0;
}
