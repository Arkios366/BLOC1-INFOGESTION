/*
* Auteur: BASTIN Thomas
* Groupe: 2103
* Application: Ecrire un programme permettant de trouver le nbre maximum de 3 nombres lus au clavier
*
*
* Date de derniere mise a jour: 1/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,n3,max;

    printf("Tapez le premier nbre: \n");
    fflush(stdin);
    scanf("%d",&n1);

    printf("Tapez le premier nbre: \n");
    fflush(stdin);
    scanf("%d",&n2);

    printf("Tapez le premier nbre: \n");
    fflush(stdin);
    scanf("%d",&n3);

    max=n1;                         //on affecte n1 à max.
    if(max<n2) max=n2;              //Si max (soit n1) est plus petit que n2, alors on affecte n2 à max
    if(max<n3) max=n3;              //Si max (soit n1) est plus petit que n3, alors on affecte n3 à max

    printf("%d est la valeur maximal",max);

    return 0;
}

