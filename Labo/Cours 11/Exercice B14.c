/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B14):		Ecrire un programme vérifiant si un nombre n est premier.
*
* Date de derniere mise a jour: 21/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,n,estpremier;

	printf("Ce programme permet de déterminer si les nombres compris entre ]0,n[ sont premiers\n");
	do{
		printf("Tapez n(>0):\n");
		fflush(stdin);
		scanf("%d",&n);
	}while(n<=0);


	for(i=1;i<n;i++){
		for(j=2,estpremier=1 ;j<i ; j++){
				if(i%j==0){
					estpremier=0;
					j=i;
				}
		}
		//Affichage
		if(estpremier==1)printf("%hd\t",i);
	}

return 0;
}
