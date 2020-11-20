/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B13):		Ecrire un programme vérifiant si un nombre n est parfait.
*
* Date de derniere mise a jour: 21/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,n,somme;

	printf("Ce programme permet de determiner si une valeur dans l'interval ]0,n[ est parfait\n");
	do{
		printf("Tapez n(>0):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<=0);




	for(j=1;j<n;j++){
		//Calcul
		for(i=1,somme=0 ; i<=(j/2) ;i++){
				if(j%i==0){
					somme+=i;
				}
		}
		//Affichage
		if(somme==j){

			printf("\n%d est un nombre Parfait\n\n",j);
			printf("Car :\n%d=",j);

			for(i=1,somme=0 ; i<=(j/2) ;i++){
				if(j%i==0)printf("%d +",i);
			}
		}
	}
return 0;
}
