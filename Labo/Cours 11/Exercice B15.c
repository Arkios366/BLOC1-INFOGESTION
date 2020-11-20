/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B15):		Ecrire un programme qui demande à l’utilisateur d’entrer un entier à trois chiffres (donc
*							compris entre 100 et 999) et dont la somme des chiffres vaut 9, et qui repose la question
*							tant que l’utilisateur se trompe.
* Date de derniere mise a jour: 21/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,somme,cent,diz,uni,r;

	printf("Ce programme vous demande une valeur si la somme des chiffres qui composent se nombre vaut 9, alors on arrete le programme\n");

	//Demande de N à l'utilisateur
	do{
	printf("Tapez n dont la somme de chaque chiffre qui le compose vaut 9 et qui est dans [100,999]:\n");
	fflush(stdin);
	scanf("%d",&n);

	while(n<100||n>999){
		printf("Tapez n qui est dans [100,999]:\n");
		fflush(stdin);
		scanf("%d",&n);
	}


	/*

	//Recherche chaque chiffre
	cent=n/100;
	r=n%100;
	diz=r/10;
	uni=r%10;
	//somme chaque chiffre
	somme=cent+diz+uni;
	//affichage somme
	printf("\nSomme=%d\n\n",somme);

	*/

	while(n>0){
		somme=somme+n%10;
		n=n/10;
	}

	}while(somme!=9);
return 0;
}
