/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :	Ecrire un programme qui réalise, au choix de l’utilisateur :
*
*				• Soit le produit scalaire de 2 vecteurs V1 et V2 : V1 * V2 = a1*b1+a2*b2+ ...an*bn
*				• Soit le produit direct V1 x V2= [a1*b1, a2*b2,……]
*
*				Les vecteurs seront remplis aléatoirement de nombres entiers compris entre 0 et 10.
*				( a1,a2,...an sont les composants de V1 et b1,b2,...bn ceux de V2)
*
* Date de derniere mise a jour: 10/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 50
int main(){
	srand(time(NULL));
	int i,n,somme,a[50],b[50],s[50],choix;

	do{
		printf("Donnez la taille des vecteurs\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<0||n>50);

	for(i=0;i<n;i++){
		a[i]=rand()%11;
		b[i]=rand()%11;
	}

	do{
		printf("Pour faire un produit Scalaire 	tapez 1:\n");
		printf("Pour faire un produit direct 	tapez 2:\n");
		fflush(stdin);
		scanf("%d",&choix);
		printf("\n\n\n");

	}while(choix<1||choix>2);

	switch(choix){
	case 1:
			for(i=0;i<n;i++){
				somme+=a[i]*b[i];
			}

			printf("\nLe produit scalaire vaut : %d",somme);
		break;
	case 2:
			for(i=0;i<n;i++){
				s[i]=a[i]*b[i];
			}

			printf("\nLe vecteur contenant le produit directe:\n");
			for(i=0;i<n;i++){
				printf("[%d]  ",s[i]);
			}

			printf("\n\n");
		break;
	}
	return 0;
}
