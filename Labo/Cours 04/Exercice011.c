/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Ecrire un programme qui affiche l'inverse d'un nombre entier n (n->1/n)
*
* Date de dernière mise à jour: 23/09/2020
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float sol;

    printf("Donnez un nombre entier: \n");
    fflush(stdin);
    scanf("%d",&n);

    if(n!=0){
    sol=1/(float)n;
    printf("L'inverse de %d: %f",n,sol);
    }
    else {
        printf("Division par zero impossible\n\n");
    }
    return 0;
}
