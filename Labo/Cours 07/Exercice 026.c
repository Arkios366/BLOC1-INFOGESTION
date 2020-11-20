/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: On entre le nbre d'electron d'un atome(max 18) le programme affiche le nombre de d'electron sur chaque couche.
* Date de dernière mise à jour: 7/10/2020
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int ne,k=1,l=0,m=0;

    printf("Tapez le nombre d'Electron (max 18):\n");
    fflush(stdin);
    scanf("%d",&ne);

    while(ne<0 || ne>18){
		printf("Erreur, tapez une valeur entre 0 et 18:\n");
		fflush(stdin);
		scanf("%d",&ne);
    }


	if(ne>=10){
		k=2;
		l=8;
		m=ne-10;
	}
	else{
		if(ne>=2){
			k=2;
			l=ne-10;
		}
	}


	printf("Il y a :\n%d e sur la couche K,\n%d e sur la couche L,\n%d e sur la couche M.",k,l,m);
    return 0;
}
