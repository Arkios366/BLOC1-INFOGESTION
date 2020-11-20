/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: On a 3 resistance, calculer la r equivalente en s�rie ou en parrall�le
*
* Date de derni�re mise � jour: 23/09/2020
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int serpar,r1,r2,r3;
    float req;

    printf("Si votre circuit est en s�rie tapez 1 si il est en parrall�le tapez 2: \n");
    fflush(stdin);
    scanf("%d",&serpar);

    printf("Tapez la valeur(Enti�re) de r1: \n");
    fflush(stdin);
    scanf("%d",&r1);

    printf("Tapez la valeur(Enti�re) de r2: \n");
    fflush(stdin);
    scanf("%d",&r2);

    printf("Tapez la valeur(Enti�re) de r3: \n");
    fflush(stdin);
    scanf("%d",&r3);

    //Si l'utilisateur veut un calcul de req en s�rie il tape 1, si une autre valeur est tap�e ;le calcul se fait en parrall�lle
    if(serpar==1){
        req=r1+r2+r3;
        printf("%d+%d+%d=%.0f",r1,r2,r3,req);
    }
    else{
        req=1/(1/(float)r1+1/(float)r2+1/(float)r3);
        printf("\n        1\n-------------------=%f\n(1/%d+1/%d+1/%d)",req,r1,r2,r3);

    }
    return 0;
}



