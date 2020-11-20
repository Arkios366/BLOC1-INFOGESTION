/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		On entre un vecteur v1 de n entiers. Afficher ce vecteur. Calculer le carré de chaque élément
*					de v1 et mettre les résultats dans un vecteur v2. Afficher v2.
*
* Date de derniere mise a jour: 28/10/2020
*/

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 50
int main(){
	int v1[TAILLE],v2[TAILLE],i,n;

	do{
		printf("Tapez le nbre d'élément du vecteur v[n] dans l'interval [1,%d]:",TAILLE);
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>TAILLE);

	for(i=0;i<n;i++){
		printf("v[%d]=",i);
		fflush(stdin);
		scanf("%d",&v1[i]);
	}

	for(i=0 ; i<n ; i++){
		printf("|%hd|   ",v1[i]);
	}
	printf("\n\n");

	for(i=0;i<n;i++){
		v2[i]=v1[i]*v1[i];
	}

	for(i=0 ; i<n ; i++){
		printf("|%hd|   ",v2[i]);
	}
	printf("\n\n");

	return 0;
}
