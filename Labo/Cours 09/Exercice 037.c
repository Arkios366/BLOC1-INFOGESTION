/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B8): a,b,c sont des valeurs lues au clavier, écriver un programme permettant de calculer:
*                                   - La somme des entiers          dans l'intervalle [a;b[
*                                   - La somme des entiers positifs dans l'intervalle ]a;b[
*                                   - La somme des entiers Pair     dans l'intervalle [a;b[
*                                   - La somme des entiers des diviseurs de c dans l'intervalle [a;b]
*
* Date de derniere mise a jour: 15/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,somme,i;

	printf("Bienvenue dans se programme qui permet de calculer plusieurs somme d'une intervalle a;b\n");
	do{
		printf("Tapez la valeur de a:\n");
		fflush(stdin);
		scanf("%d",&a);

		printf("Tapez la valeur de b:\n");
		fflush(stdin);
		scanf("%d",&b);

		printf("Tapez la valeur du diviseur c:\n");
		fflush(stdin);
		scanf("%d",&c);

		if(a>b)printf("La valeur de A doit etre superieur a B\n");

	}while(a>b);

	/* La somme des entiers dans l'intervalle [a;b[ */
	for(i=a,somme=0;i<b;i++){
		somme=somme+i;
	}
	printf("La somme des entiers dans l'intervalle [%d;%d[ = %d\n\n",a,b,somme);


	/* La somme des entiers positifs dans l'intervalle ]a;b[ on commence à zero car c'est la somme des positifs */
	for(i=0,somme=0;i<b;i++){
		if(i>=0)somme=somme+i;
	}
	printf("La somme des entiers positifs dans l'intervalle ]%d;%d[ = %d\n\n",a,b,somme);


	/* La somme des entiers Pair dans l'intervalle [a;b[ */
	for(i=a,somme=0;i<b;i++){
		if(i%2==0)somme=somme+i;
	}
	printf("La somme des entiers pairs dans l'intervalle [%d;%d[ = %d\n\n",a,b,somme);


	/* La somme des entiers des diviseurs de c dans l'intervalle [a;b] */
	for(i=a,somme=0;i<=b;i++){
		if(c%i==0)somme=somme+i;
	}
	printf("La somme des entiers des diviseurs de %d dans l'intervalle [%d;%d] = %d\n\n",c,a,b,somme);
    return 0;
}
