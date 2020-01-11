#include <stdio.h>
#include "struktury.h"
#include <stdlib.h>

struct element *lista;

void dodaj_na_pocz(struct element **pocz, struct element *nowy)
{
	nowy->next=pocz;
	*pocz=nowy;
}

void dodaj_na_koniec(struct element **pocz, struct element *nowy)
{
	struct element *tmp;
	if(!*pocz)
	{
		*pocz=nowy;
		nowy->next=NULL;	
	}	
	else
	{
		while(tmp->next)
		{
			tmp=tmp->next;
		}
		tmp->next=nowy;
		nowy->next=NULL;
	}
}

void wysw(struct element *pocz){
	while(pocz) { //while reaguje tez na NULL
		printf("%d\n",pocz->i);
		pocz=pocz->next;
	}
}

void usun_liste(struct element *pocz)
{
	struct element *tmp;
	while(pocz)
	{
		tmp=pocz;
		pocz=pocz->next;
		free(tmp);
	}
}

void main()
{
int liczba;
int n = 1;
while(n){
	printf("Podaj liczbe: ");
	n = scanf("%d",&liczba);
	if(n!=0){
		struct element *el=(struct element *)malloc(sizeof(struct element));
		if(el != NULL){
			el->i=liczba;
			dodaj_na_pocz(&lista,el);	
		}
	
	}
}
wysw(lista);
usun_liste(lista);
}
