/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B4): Ecrire un programme qui demande � l'utilisateur d'entrer le montant qu'il d�sire retirer au distributeur.
*                   Ce montant doit �tre multiple de 20euros la r�ponse est repos�e tant que le montant entr� n'est pas correcte.
*
* Date de derniere mise a jour: 15/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int retrait;

    do{
    printf("Tapez la valeurs de votre retrait (Billets de 20 uniquements):");
    fflush(stdin);
    scanf("%d",&retrait);

    printf("\n\n\nValeur entree :\t%d\n",retrait);
    }while(retrait%20);

    return 0;
}


