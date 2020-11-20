/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B10):  Calculez la somme des N premiers termes des 2 séries suivantes (au choix de l’utilisateur) :
*																					• S = 1+1/2+1/3+1/4+….+1/n
*																					• S = 1-1/2 +1/3-1/4+….+/-1/n
*
* 					  Le rang n est choisi par l’utilisateur (entier strictement positif)
*
* Date de derniere mise a jour: 21/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	short i,n;
	float s1,s2;

	do{
	printf("Tapez n(>0):\n");
	fflush(stdin);
	scanf("%hd",&n);
	}while(n<0);

	for(i=1,s1=0,s2=0 ; i<=n ; i++){
			s1+=1/(float)i;
			if(i%2==0)s2-=1/(float)i;
			else s2+=1/(float)i;
	}

	printf("\n\nLa somme de  des carres des %hd premiers entiers impairs:\n",n);
	for(i=1 ; i<=n ; i++) {
			printf("(%hd/%hd)+",1,i);
	}
	printf("\n=%.3f\n\n\n",s1);
	for(i=1 ; i<=n ; i++) {
			if(i%2==0) printf("(%hd/%hd)-",1,i);
			else printf("(%hd/%hd)+",1,i);
	}
	printf("\n=%.3f",s2);

return 0;
}
