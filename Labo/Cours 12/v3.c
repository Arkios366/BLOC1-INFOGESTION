/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Soit un vecteur v1 contenant n1 éléments et un vecteur v2 contenant n2 éléments. Les
*					éléments de ces vecteurs sont saisis au clavier et compris entre 0 et 50.
*					Ecrire un programme qui concatène v1 et v2 (=> v3). Afficher les 3 vecteurs.
*
* Date de derniere mise a jour: 28/10/2020
*/

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 50
int main(){
	int v1[TAILLE],v2[TAILLE],v3[TAILLE],i,j,n1,n2;

	/*Encoddage v1*/
	do{
		printf("Tapez le nbre d'élément du vecteur v1[n] dans l'interval [1,%d]:",TAILLE);
		fflush(stdin);
		scanf("%d",&n1);
	}while(n1<1||n1>TAILLE);

	for(i=0;i<n1;i++){
		do{
			printf("v1[%d]=",i);
			fflush(stdin);
			scanf("%d",&v1[i]);
		}while(v1[i]<0||v1[i]>50);
	}


	/*Encoddage v2*/
	do{
		printf("Tapez le nbre d'élément du vecteur v2[n] dans l'interval [1,%d]:",TAILLE);
		fflush(stdin);
		scanf("%d",&n2);
	}while(n2<1||n2>TAILLE);

	for(i=0;i<n2;i++){
		do{
			printf("v2[%d]=",i);
			fflush(stdin);
			scanf("%d",&v2[i]);
		}while(v2[i]<0||v2[i]>50);
	}



	/*Concaténage de v1 et v2 dans v3*/
	for(i=0 ; i<n1 ; i++){
		v3[i]=v1[i];
	}
	for(i=n1, j=0 ; i<(n1+n2) ; i++, j++){
		v3[i]=v2[j];
	}



	/*Affichage v1*/
	printf("v1[n1\n");
	for(i=0 ; i<n1 ; i++){
		printf("|%hd|   ",v1[i]);
	}
	printf("\n\n");

	/*Affichage v2*/
	printf("v2[n2]\n");
	for(i=0 ; i<n2 ; i++){
		printf("|%hd|   ",v2[i]);
	}
	printf("\n\n");

	/*Affichage v3*/
	printf("v3[n1+n2]\n");
	for(i=0 ; i<(n1+n2) ; i++){
		printf("|%hd|   ",v3[i]);
	}
	printf("\n\n");

	return 0;
}
