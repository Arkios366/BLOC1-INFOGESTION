/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: On entre la vitesse le programme affiche des ammendes en lien avec la vitesse.
*								1 à 20 		-> 25€
*								21 à 30		-> 50€
*								31 à 40 	-> 150€
*								41 à 50 	-> 250€
*								51 à infini -> 750€
* Date de dernière mise à jour: 7/10/2020
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int v;

    printf("Tapez l'exces de vitesse:\n");
    fflush(stdin);
    scanf("%d",&v);

    while(v<=0){
		printf("Erreur, Entrez une valeur positive non nul:\n");
		fflush(stdin);
		scanf("%d",&v);
    }


	if(v>20){
		if(v>30){
			if(v>40){
				if(v>50){
					printf("Ammende de 750 Euros");
				}
				else{
					printf("Ammende de 250 Euros");
				}
			}
			else{
				printf("Ammende de 150 Euros");
			}
		}
		else{
			printf("Ammende de 50 Euros");
		}
	}
	else{
		printf("Ammende de 25 Euros");
	}
    return 0;
}

