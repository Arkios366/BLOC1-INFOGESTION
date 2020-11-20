/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Soit un vecteur T[50] de N entiers compris entre -10 et 10. Rechercher la présence
*					éventuelle d’un entier compris dans cet intervalle et saisi par l’utilisateur. On affichera sa
*					position dans le vecteur si il est trouvé.
*					Utiliser l’algorithme de recherche dichotomique (avec indices)
*
* Date de derniere mise a jour: 11/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 50
int main(){
	srand(time(NULL));
	int n,i,j,temp,imax,v[TAILLE]={0},val,beg,mid,end;

	//Entrée des valeurs du vecteur
	do{
		printf("Taille du vecteur (1 a 50):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<1||n>50);



	//Remplissage du vecteur
	for(i=0 ; i<n ; i++){
		v[i]=(rand()%21)-10;
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




	//Recherche Dichotomique:
	do{
		printf("Donnez la valeur a chercher (entre -10 et 10):\t");
		fflush(stdin);
		scanf("%d",&val);
	}while(val<-10||val>10);

	for(beg=0, end=n-1, mid=(beg+end)/2 ; beg<end && v[mid]!=val ; mid=(beg+end)/2){

		if(v[mid]<val){
			beg=mid+1;
		}
		else{
		 	end=mid-1;
		}
	}

	//Affichage
	if(v[mid]==val){
		printf("La valeur %d a ete trouve a l'indice %d\n\n",val,mid);
	}
	else{
		printf("La valeur %d n'a pas ete trouve\n\n",val);
	}
return 0;
}
