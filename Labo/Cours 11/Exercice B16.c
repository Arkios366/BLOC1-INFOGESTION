/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B16):  Afficher les nombres de Fibonacci jusqu’au rang N (choisi par l’utilisateur)
*				Tn = Tn-2 + Tn-1
*				avec T0 = 0 et T1 = 1
*
* Date de derniere mise a jour: 21/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,tn,t1,t2;

	printf("Ce programme affiche la suite de fibonacci jusqu'au rang n\n");
	do{
	printf("Tapez n(entre 0 et 46):\n");
	fflush(stdin);
	scanf("%d",&n);
	}while(n<0||n>46);

	printf("|0|\t");
	printf("|1|\t");

	for(i=2,t2=0,t1=1;i<=n;i++,t2=t1,t1=tn){
			tn=t2+t1;
			printf("|%d|",tn);

	}

    return 0;
}
