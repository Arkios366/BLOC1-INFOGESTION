/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Soit un vecteur rempli aléatoirement de 0 et de 1. Déterminer la plus grande suite
*					consécutive de 1 dans ce vecteur (afficher la position de début + la taille).
*
* Date de derniere mise a jour: 11/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 50
int main(){
	srand(time(NULL));
	int n,i,v[TAILLE]={0},m,r,oc;

	do{
		printf("Taille du vecteur (1 a 50):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>50);
	//Affectation v
	for(i=0 ; i<n ; i++){
		v[i]=rand()%2;
	}

	//Affichage v
	for(i=0 ; i<n ; i++){
		printf("[%d]  ",v[i]);
	}
	//Affichage recherche des 0/1, des suites de 1 et du début de l'occurance la plus longue
	for(i=0,m=0,r=0 ; i<n ; i++){

		if(v[i]==0){
			r=0;
		}
		else{
			r++;
			if(m<r){
				m=r;
			}
		}
	}

	for(i=0,r=0 ; i<n ; i++){
		if(v[i]==0){
			r=0;
		}
		else {
			r++;
			if(r==m){
				oc=i-(m-1);
				i=n+1;
			}
		}
	}

	//Affichage
	printf("\n\nLa plus grande suite est compose de %d elements et le debut est en %d eme position",m,oc+1);

return 0;
}
