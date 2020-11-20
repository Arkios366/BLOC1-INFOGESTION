/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Décomposer un nombre entier en ses différents chiffres constitutifs et placer ces derniers
*					dans un vecteur. Afficher le vecteur.
*
* Date de derniere mise a jour: 10/11/2020
*/

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10
int main(){

	int i,n,r,d,v[TAILLE]={1};


	printf("Encodez votre nombre:\n");
	fflush(stdin);
	scanf("%d",&n);


	for (i=0,r=n,d=1000000000 ; i<TAILLE ; i++,d/=10){
		v[i]=r/d;
		r=r%d;
	}


	printf("v[i]:\n");
	for(i=0; i<TAILLE ; i++){
			printf("[%d]",v[i]);
	}

	return 0;
}
