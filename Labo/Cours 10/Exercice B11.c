/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B11):  	Ecrire un programme qui calcule la factorielle d'un nombre entier positif ou nul entre au clavier.
*						On rappelle que la fonction factorielle est définie sur les entiers positifs de la facon suivante :
*
*										factorielle(0) = 1
*										factorielle(n) = n x (n − 1) x . . . x 2 x 1 si n > 1
*
* Date de derniere mise a jour: 21/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n;
	double f;

	do{
	printf("Ce programme permet de calculer la factorielle de n\n");
	printf("Tapez n:\n");
	fflush(stdin);
	scanf("%d",&n);
	}while(n<0);

	if (n==0) {
			f=1;
			printf("f=%.0lf",f);
	}
	else{
		for(i=1,f=1 ; i<=n ; i++)f*=i;

		//Affichage
		printf("f=");
		for(i=1 ; i<=n ; i++) {
				printf("%d *",i);
		}
		printf("\n= %.0lf",f);
	}

return 0;
}
