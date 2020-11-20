/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Ecrire un programme qui inverse l’ordre des nombres entiers contenus dans un vecteur de
*					maximum 100 éléments.
*
*					1. En utilisant un deuxième vecteur
*					2. Avec un seul vecteur
*
* Date de derniere mise a jour: 30/10/2020
*/

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 100
int main(){

	int v1[TAILLE],v2[TAILLE],n,i,j,tmp;

	/*Taille de v1,v2*/
	do{
		printf("Tapez le nbre n d'élément du vecteur vec[n] dans l'interval [1,%d]:",TAILLE);
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>TAILLE);

	/*Encoddage v1*/
	for(i=0 ; i<n ; i++){
		printf("v1[%d]: ",i);
		fflush(stdin);
		scanf("%d",&v1[i]);
	}

	/*Affichage v1*/
	printf("v1[n]\n");
	for(i=0 ; i<n ; i++){
		printf("|%hd|   ",v1[i]);
	}
	printf("\n\n");


	/*Inversion dans v2*/
	for(i=0, j=(n-1) ; i<n ; i++, j--){
			v2[j]=v1[i];
	}


	/*Inversion dans v1*/

	for(i=0, j=(n-1) ; i<(n+1)/2 ; i++, j--){
			tmp=v1[i];
			v1[i]=v1[j];
			v1[j]=tmp;
	}


	/*Affichage v2*/
	printf("v2[n]\n");
	for(i=0 ; i<n ; i++){
		printf("|%hd|   ",v2[i]);
	}
	printf("\n\n");


	/*Affichage v1*/
	printf("v1[n]\n");
	for(i=0 ; i<n ; i++){
		printf("|%hd|   ",v1[i]);
	}
	printf("\n\n");


	return 0;
}
