/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B9):  Ecrire un programme qui calcule la somme des carrés des n premiers entiers impairs.
*              		 Par exemple, si n= 5 : sommeCarresImpairs(5) = 1² + 3² + 5² + 7² + 9² = 165
*
* Date de derniere mise a jour: 21/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,somme;

	do{
		printf("Tapez n(>0):\n");
		fflush(stdin);
		scanf("%d",&n);

	}while(n<0);

	for(i=1,somme=0 ; i<=n ; i+=2){
			somme=somme+i*i;
	}
	printf("\n\nLa somme de  des carres des %d premiers entiers impairs:\n",n);

	for(i=1 ; i<=n ; i+=2) {
			printf("(%d*%d)+",i,i);
	}
	printf("\n=%d",somme);

return 0;
}
