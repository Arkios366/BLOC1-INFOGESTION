/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Ecrire un programme qui, étant donnés deux vecteurs A et B d’entiers de même longueur N,
*					détermine le nombre de positions où A[i] = B[i].
*					Les éléments seront saisis manuellement et compris entre -5 et 5.
*
* Date de derniere mise a jour: 11/11/2020
*/

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 50
int main(){
	int i,n,A[TAILLE],B[TAILLE],occurance;

	do{
		printf("Taille du vecteur (1 a 50):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>50);

	//Encodage de A[]
	for(i=0 ; i<n ; i++){
		do{
			printf("[-5,5] A[%d]=",i);
			fflush(stdin);
			scanf("%d",&A[i]);
		}while(A[i]<-5 || A[i]>5);
	}

	//Encodage de B[]
	for(i=0 ; i<n ; i++){
		do{
			printf("[-5,5] B[%d]=",i);
			fflush(stdin);
			scanf("%d",&B[i]);
		}while(B[i]<-5 || B[i]>5);
	}

	//Recherche des occurances
	for(i=0,occurance=0 ; i<n ; i++){
		if(A[i]==B[i]){
				occurance++;
		}
	}
	printf("Il y a %d occurance",occurance);

	return 0;
}
