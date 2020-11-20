/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B7): Ecrire un programme permettant d'afficher une liste d'équivalence pour des températures
*                   comprises entre 0 et 200 °F avec un incrément de 10 °F.
*                   Ecrire le programme avec un boucle, while, do while, et for.
*                   Formule: C=(F-32)*((Float)5/9)

* Date de derniere mise a jour: 15/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,choix;
    float c;

    do{
    printf("while 1:\ndo while 2:\nfor 3:\n");
    fflush(stdin);
    scanf("%d",&choix);

    switch(choix){
    case 1:
            while(i<=200){
                c=(i-32)*((float)5/9);
                printf("%d F en C=%.2f\n",i,c);
                i=i+10;
            }
        break;
    case 2:
            i=0;
            do{
                c=(i-32)*((float)5/9);
                printf("%d F en C=%.2f\n",i,c);
                i=i+10;
            }while(i<=200);


        break;
    case 3:
            for (i=0;i<=200;i=i+10){
                c=(i-32)*((float)5/9);
                printf("%d F en C=%.2f\n",i,c);
            }
        break;
    default: printf("Erreur");
    }
    printf("Si vous voulez couper le programme tapez 0, si non tapez une autre valeur: ");
    fflush(stdin);
    scanf("%d",&choix);
    }while(choix);
    return 0;
}


