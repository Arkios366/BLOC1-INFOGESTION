/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :	Ecrire un programme de jeu qui permettra à l’utilisateur de trouver un nombre choisi par
				l’ordinateur. L’ordinateur choisit un nombre au hasard en utilisant la fonction RAND :
					x=RAND() rand() -> renvoie un nombre compris entre 0 et 32767

				Question : comment utiliser la fct rand() ?

				L’utilisateur dispose d’un nombre limite d’essais pour trouver ce nombre et, à chaque essai,
				l’ordinateur affichera soit « nombre trop petit », soit « nombre trop grand ».
*
* Date de derniere mise a jour: 10/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 50
int main(){
	int x,n,i;

	srand(time(NULL));
	x=rand();

	for(i=0 ; i<6 ; i++){

			printf("Entrer une valeur positive.\n");
			fflush(stdin);
			scanf("%d",&n);

		while(n<0 || n>32767){
			scanf("%d",&n);
			if(n<0 || n>32767){
					printf("La valeur entree n'est pas comprises dans x.\n");
			}
		}

		if(x>n) printf("Nombre trop petit\n\n\n");

		else if(x<n) printf("Nombre trop grand\n\n\n");

			 else i=7;
	}

	if(x==n)printf("\n\nBravo vous avez trouver la valeur encodee par le programme (%d)\n\n\n",x);
	else printf("\n\nVotre valeur n'est pas la meme que celle de l'ordinateur(%d).\n\n\n",n);


	return 0;
}
