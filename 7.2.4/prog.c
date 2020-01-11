#include <stdio.h>
#include "struktury.h"

void przypisz(struct punkt tab1[], struct punkt tab2[], unsigned int n)
{
	//memcpy(tab2,tab1,sizeof(tab2));
	for(int i=0;i<n;i++){
		tab2[i].x=tab1[i].x;
		tab2[i].y=tab1[i].y;
		tab2[i].z=tab1[i].z;
		}
}

int main()
{
struct punkt t1[]={{1,1,1},{2,2,2}}, t2[]={{3,3,3},{4,4,4}};
printf("%d %d %d\nprzypisz...\n",t2[0].x,t2[0].y,t2[0].z);
przypisz(t1,t2,3);
printf("%d %d %d\n",t2[0].x,t2[0].y,t2[0].z);
return 0;
}
