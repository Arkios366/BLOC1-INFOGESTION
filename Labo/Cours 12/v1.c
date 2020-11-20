/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Ecrire un programme calculant la somme ou le produit (au choix de l’utilisateur) des
*					éléments d’un vecteur vec [50]. Le nombre d’éléments saisis et les éléments eux-mêmes
*					sont choisis par l’utilisateur.
*
* Date de derniere mise a jour: 28/10/2020
*/

#include <stdio.h>
#include <stdlib.h>


#define TAILLE 50
int main(){
	int choix,n,v[TAILLE],i,sp;

	do{
		printf("Tapez le nbre d'élément du vecteur v[n] dans l'interval [1,%d]:",TAILLE);
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>TAILLE);

	for(i=0;i<n;i++){
		printf("v[%d]=",i);
		fflush(stdin);
		scanf("%d",&v[i]);
	}

	do{
		printf("Si vous voulez faire la somme du vecteur 	tapez 1:\n");
		printf("Si vous voulez faire le produit du vecteur 	tapez 2:\n");
		fflush(stdin);
		scanf("%d",&choix);
	}while(choix<1||choix>2);

	switch(choix){
	case 1:
			for(i=0,sp=0;i<n;i++){
				sp+=v[i];
			}
			printf("la somme du vecteur v[n]= %d\n\n\n",sp);
		break;


	case 2:
			for(i=0,sp=1;i<n;i++){
				sp*=v[i];
			}
		printf("le produit du vecteur v[n]= %d\n\n\n",sp);
		break;

	default:printf("Erreur");
	}


	return 0;
}
