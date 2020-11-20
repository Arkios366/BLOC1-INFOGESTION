/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		On considère un vecteur de maximum 50 éléments entiers.
*					Il est rempli par N nombres (N , variable saisie par l’utilisateur) entrés de manière aléatoire
*					et compris entre 0 et 100.
*					Trier ce vecteur par ordre croissant en utilisant l’algorithme du TRI PAR EXTRACTION.
*
* Date de derniere mise a jour: 11/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 50
int main(){
	srand(time(NULL));
	int n,i,j,temp,imax,v[TAILLE]={0};

	//Entrée des valeurs du vecteur
	do{
		printf("Taille du vecteur (1 a 50):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>50);

	//Remplissage du vecteur
	for(i=0 ; i<n ; i++){
		v[i]=rand()%101;
	}

	//Affichage vecteur non trier
	printf("\nLe vecteur non trier\n");
	for(i=0 ; i<n ; i++){
		printf("[%d]  ",v[i]);
	}
	printf("\n");

	//Tri par EXTRACTION
	for(j=n-1 ; j>0 ; j--){
		for(i=1,imax=0 ; i<=j ; i++){
				if(v[i]>v[imax]){
						imax=i;
				}
		}
		temp=v[imax];
		v[imax]=v[j];
		v[j]=temp;
	}

	//Affichage vecteur trier
	printf("\nLe vecteur trier\n");
	for(i=0 ; i<n ; i++){
		printf("[%d]  ",v[i]);
	}
	printf("\n");
return 0;
}
