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
	int n,i,j;

	do{
	printf("Tapez n (n>1):\n");
	fflush(stdin);
	scanf("%d",&n);
	}while(n<1);


	printf("\n\n\n\n");
	//Affichage
	for(i=1 ; i<=n ; i++){
			for(j=1 ; j<=i ; j++){
				printf("%d",j);
			}
		printf("\n");
	}
    return 0;
}
