/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Ecrire un programme qui Affiche le chiffre des
*dizaines et des centaines d'un nombre à 3 chiffres lu au clavier.
*
* Date de dernière mise à jour: 23/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,n10,n100;

    printf("Tapez un nombre à trois chiffres: \n");
    fflush(stdin);
    scanf("%d",&n);

    if(n<1000||n>99){
        n100=(n/100);
        n10=(n/10)-(n100*10);
        printf("La valeur de la dizaine est %d et la valeur de la centaine est %d",n10,n100);
    }
    else{
        printf("Vous n'avez pas taper un nombre a trois chiffres desole");
    }

    return 0;
}
