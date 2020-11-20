/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Lire n, le nombre d’éléments d’un vecteur vec d’entiers de taille max=30.
*					Saisir les n éléments de vec et déterminer k tel que :
*
*							1. k = -1 si tous les éléments de vec sont égaux à 0
*							2. k = indice du premier élément de vec différent de 0, donc 0 <= k <= n – 1
*
* Date de derniere mise a jour: 28/10/2020
*/

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 30
int main(){
	int vec[TAILLE],n,k,i;

	/*Taille de vec*/
	do{
		printf("Tapez le nbre n d'élément du vecteur vec[n] dans l'interval [1,%d]:",TAILLE);
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>TAILLE);

	/*Encoddage vec*/
	for(i=0 ; i<n ; i++){
		printf("vec[%d]: ",i);
		fflush(stdin);
		scanf("%d",&vec[i]);
	}

	/*Affichage vec*/
	printf("vec[n]\n");
	for(i=0 ; i<n ; i++){
		printf("|%hd|   ",vec[i]);
	}
	printf("\n\n");

	/*Recherche d'un élément égal à 0*/
	for(i=0,k=-1 ; i<n ; i++){
		if(vec[i]!=0){
				k=i;
				i=31;
		}
	}

	if(k==-1){
		printf("Tout les elements de vec valent 0");
	}
	else{
		if (k>=0&&k<n){
			printf("Il y a au moins un element qui ne vaut pas 0 dans le vecteur, le premier est a l'indice %d\n",k);
		}

	}



	return 0;
}
