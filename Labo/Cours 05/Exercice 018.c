/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Afficher le signe d'un nombre entier lu au clavier
*
* Date de dernière mise à jour: 30/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Tapez Un nombre Entier: \n");
    fflush(stdin);
    scanf("%d",&n);

    if(n>0) printf("%d est Positif\n",n);
    else {
        if(n<0) printf("%d est Negatif\n",n);
        else printf("%d est Nul\n",n);
    }
    return 0;
}
