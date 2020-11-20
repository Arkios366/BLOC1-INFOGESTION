/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B17):  Ecrire un programme présentant l’affichage suivant jusqu’à un rang n saisit par l’utilisateur
*
* Date de derniere mise a jour: 21/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	double a,je;

	do{
	printf("Tapez a (a>0):\n");
	fflush(stdin);
	scanf("%lf",&a);
	}while(a<0);

	do{
	printf("Tapez j (0<j<50):\n");
	fflush(stdin);
	scanf("%d",&n);
	}while(j<0||j>=50);

	printf("\n\n\n\n");

	//Affichage
	for(i=a ; i<=n ; i++){


		printf("La %d e approximation de la racine de %.3lf est %.3lf\n",i,a,);
	}


    return 0;
}
