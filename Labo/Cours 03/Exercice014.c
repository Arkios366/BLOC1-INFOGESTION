/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Ecrire un programme qui calcule la distance entre deux points A et B d'un plan Orthonormé, L'utilisateur saisit les coordonnées.
* Date de dernière mise à jour: 23/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int Xa,Xb,Ya,Yb;
    float v1;

        printf("Tapez la valeur de Xa: \n");
        fflush(stdin);
        scanf("%d",&Xa);

        printf("Tapez la valeur de Ya: \n");
        fflush(stdin);
        scanf("%d",&Ya);

        printf("Tapez la valeur de Xb: \n");
        fflush(stdin);
        scanf("%d",&Xb);

        printf("Tapez la valeur de Yb: \n");
        fflush(stdin);
        scanf("%d",&Yb);

    v1=sqrt(pow(Xb-Xa,2.0) + pow(Yb-Ya,2.0));
    printf("La distance entre les deux points est de: %.4f\n\n\n",v1);

    return 0;
}



