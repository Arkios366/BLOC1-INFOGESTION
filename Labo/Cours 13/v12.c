/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Soit un vecteur d’entiers :
*
*						1. Déterminer si les éléments sont strictement croissants
*						2. Ou strictement décroissants
*						3. Ou tous égaux
*
* Date de derniere mise a jour: 10/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 50
int main(){
	int n,i,v[TAILLE]={0},choix,r;

	do{
		printf("Taille du vecteur (1 a 50):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>50);

	for(i=0 ; i<n ; i++){
		printf("v[%d]=",i);
		fflush(stdin);
		scanf("%d",&v[i]);
	}

	//Choix 1,2,3
	do{
		printf("Determiner si les elements sont strictement croissants  Tapez 1:\n");
		printf("Ou strictement decroissants                             Tapez 2:\n");
		printf("Ou tous égaux                                           Tapez 3:\n\n");

		fflush(stdin);
		scanf("%d",&choix);
	}while(n<1||n>3);

	switch(choix){
		case 1:
			for(i=0,r=1 ; i<n-1 ; i++){
				if(v[i]>v[i+1]){
					r=0;
					i=n+1;
				}
			}

			if(r){
				printf("Elements strictement croissants\n");
			}
			else{
				printf("Element non croissant\n");
			}

			break;
		case 2:
			for(i=0,r=1 ; i<n-1 ; i++){
				if(v[i]<v[i+1]){
					r=0;
					i=n+1;
				}
			}

			if(r){
				printf("Element strictement decroissants\n");
			}
			else{
				printf("Element non decroissants\n");
			}

			break;
		case 3:
			for(i=0,r=1 ; i<n-1 ; i++){
				if(v[i]!=v[i+1]){
					r=0;
					i=n+1;
				}
			}

			if(r){
				printf("Element tous égaux.\n");
			}
			else{
				printf("Element innégaux.\n");
			}

			break;
	}



return 0;
}
