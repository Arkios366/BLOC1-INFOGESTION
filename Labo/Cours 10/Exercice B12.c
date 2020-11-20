/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B12):		Ecrire un programme vérifiant si un nombre n est parfait.
*
* Date de derniere mise a jour: 21/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,somme;

	printf("Ce programme permet de déterminer si le nombre n est parfait\n");
	do{
	printf("Tapez n(>0):\n");
	fflush(stdin);
	scanf("%d",&n);
	}while(n<0);

	//Calcul
	for(i=1,somme=0 ; i<=(n/2) ;i++){
			if(n%i==0){
				somme+=i;
			}
	}



	//Affichage
	if(somme==n){
		printf("\n%d est un nombre Parfait\n\n",n);
		printf("Car :\n%d=",n);
	}
	else{
		printf("\n%d n'est pas un nombre Parfait.\n\n",n);
		printf("Car :\n%d!=",n);
	}


	for(i=1,somme=0 ; i<=(n/2) ;i++){
			if(n%i==0)printf("%d +",i);
	}

return 0;
}
