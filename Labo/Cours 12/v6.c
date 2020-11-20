/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Saisir les éléments d’un vecteur de réels de taille n, n est choisi par l’utilisateur.
*					Ecrire un programme sui demande à l’utilisateur de saisir un nombre et vérifie si ce dernier
*					(=cible) se trouve dans le vecteur.
*
*					Si le nombre est présent dans le vecteur, le programme affichera « nombre trouvé » ainsi
*					que la position de sa 1ère occurrence dans le vecteur, « non trouvé » sinon.
*
* Date de derniere mise a jour: 30/10/2020
*/

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 50
int main(){
	int vec[TAILLE],n,k,i,cible;

	/*Taille de vec*/
	do{
		printf("Tapez le nbre n d'élément du vecteur vec[n] dans l'interval [1,%d]:",TAILLE);
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>TAILLE);

	/*Encoddage vec*/
	for(i=0 ; i<n ; i++){
		vec[i]=rand()%100;
	}


	printf("Tapez la valeur cherchée dans le tableaux:");
	fflush(stdin);
	scanf("%d",&cible);

	/*Recherche d'un élément égal à 0*/
	for(i=0,k=-1 ; i<n ; i++){
		if(vec[i]==cible){
				k=i;
				i=31;
		}
	}

	if(k==-1){
		printf("nombre non trouve\n\n");
	}
	else{
			printf("nombre trouvé, premiere occurance est a l'indice %d\n\n",k);

	}


	/*Affichage vec*/
	printf("vec[n]\n");
	for(i=0 ; i<n ; i++){
		printf("|%hd|   ",vec[i]);
	}
	printf("\n\n");


	return 0;
}
