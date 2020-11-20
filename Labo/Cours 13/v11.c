/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :	Ecrire un programme permettant de trouver la valeur maximale des éléments d’un vecteur
*				de nombres entiers compris entre -20 et 20 et qui affiche la valeur maximale ainsi que sa
*				première occurrence.
*
* Date de derniere mise a jour: 11/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 50
int main(){
	srand(time(NULL));
	int n,i,v[TAILLE]={0},max,oc;

	//Entrée des valeurs du vecteur
	do{
		printf("Taille du vecteur (1 a 50):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>50);



	//Remplissage du vecteur
	for(i=0 ; i<n ; i++){
		v[i]=(rand()%2);
	}

	//Affichage vecteur non trier
	printf("\nLe vecteur non trier\n");
	for(i=0 ; i<n ; i++){
		printf("[%d]  ",v[i]);
	}
	printf("\n");



	//Recherche valeur maximal
	max=v[0];
	for(i=0 ; i<n ; i++){
		if(v[i]>max){
			max=v[i];
		}
	}

	//Recherche 1er occurance
	for(i=0,oc=0 ; i<n ; i++){
			if(v[i]==max){
				oc=i;
				i=n+1;
			}
	}
	printf("oc=%d max=%d",oc,max);

return 0;
}
