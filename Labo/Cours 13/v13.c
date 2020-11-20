/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Saisir n, la taille d’un vecteur vec ainsi que les n éléments de vec.
*					Pour tous les éléments de vec , remplacer vec[i] par l'inverse de vec [n-i-1].
*
*
* Date de derniere mise a jour: 11/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 50
int main(){
	int n,i,temp;
	float vec[TAILLE]={0};

	do{
		printf("Taille du vecteur (1 a 50):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>50);
	//Encodage vec
	for(i=0 ; i<n ; i++){
		printf("vec[%d]=",i);
		fflush(stdin);
		scanf("%f",&vec[i]);
	}


	for(i=0 ; i<=(n-1)/2 ; i++){
		temp=vec[i];
		vec[i]=1/vec[n-i-1];
		vec[n-i-1]=1/temp;
	}

	//Affichage Vec
	printf("vec :\n");
	for(i=0 ; i<n ; i++){
		printf("[%.f]  ",vec[i]);
	}
	printf("\n");

return 0;
}
