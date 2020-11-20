/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Ecrire un programme qui transforme un nbre de jours en années, mois, et jours (On suppose 1 ans == 360j   1 mois == 30j)
*
* Date de dernière mise à jour: 23/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,j,m,a,r;
    printf("tapez le nombre de jour: ");
    fflush(stdin);
    scanf("%d",&n);

    a=n/360;
    r=n%360;
    m=r/30;
    r=r%30;
    j=r;
    printf("Ce qui vaut %d Ans %d Mois %d Jours",a,m,j);

    return 0;
}


