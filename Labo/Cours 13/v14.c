/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Saisir n, la taille d’un vecteur vec ainsi que les n éléments de vec.
*					Afficher le vecteur.
*					Calculer et afficher dans un autre vecteur l’écart de chaque élément par rapport à la
*					moyenne arithmétique des éléments du vecteur initial.
*
*
* Date de derniere mise a jour: 11/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 50
int main(){
	int n,i,vec[TAILLE]={0},moy[TAILLE],s;

	do{
		printf("Taille du vecteur (1 a 50):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>50);

	for(i=0 ; i<n ; i++){
		printf("vec[%d]=",i);
		fflush(stdin);
		scanf("%d",&vec[i]);
	}

	//affichage vec
	printf("vec:\n");
	for(i=0 ; i<n ; i++){
		printf("[%d]   ",vec[i]);
	}
	printf("\n");

	//calcul moyenne
	for(i=0,s=0 ; i<n ; i++){
		s+=vec[i];
	}
	s/=n;

	//Affichage Moyenne
	printf("La moyenne est de %d\n",s);


	//calcul Ecart Moy
	for(i=0 ; i<n ; i++){
		moy[i]=vec[i]-s;

		if(moy[i]<0){
			moy[i]=-moy[i];
		}
	}

	//affichage moy[]
	printf("moy[]:\n");
	for(i=0 ; i<n ; i++){
		printf("[%d]   ",moy[i]);
	}
	printf("\n");


return 0;
}
