/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B3): Ecrire un programme qui affiche � l'�cran la table de multiplication
*                   pour un entier lu au clavier. La limite est fix�e par l'utilisateur.
*
* Date de derniere mise a jour: 15/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,a,mult;

    printf("Tapez l'entier (base de votre table de multiplication):");
    fflush(stdin);
    scanf("%d",&n);

    printf("Tapez la valeur multiplcative maximale :");
    fflush(stdin);
    scanf("%d",&a);

    for(i=0;i<=a;i++){
        mult=n*i;
        printf("%d*%d=%d\n",i,n,mult);
    }
    return 0;
}

