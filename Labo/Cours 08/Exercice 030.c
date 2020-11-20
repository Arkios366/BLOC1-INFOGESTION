/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: On lit DEUX resultat d'examens(/20): Ecrire un prog qui permet le choix suivant  1)"Affichages des cotes obtenues"
*                                                                                               2)"Affichage de la cotes maximale"
*                                                                                               2)"Affichage de la moyenne des cotes"
* Date de derniere mise a jour: 8/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cote2,cote1,choix,moy;

    printf("Tapez la premiere cote(entier entre 0 et 20): \n");
    fflush(stdin);
    scanf("%d",&cote1);

    while(cote1<0||cote1>20){
        printf("Erreur, tapez une valeur entre 0 et 20: \n");
        fflush(stdin);
        scanf("%d",&cote1);
    }

    printf("Tapez la seconde cote(entier entre 0 et 20): \n");
    fflush(stdin);
    scanf("%d",&cote2);

    while(cote2<0||cote2>20){
        printf("Erreur, tapez une valeur entre 0 et 20: \n");
        fflush(stdin);
        scanf("%d",&cote2);
    }

    do{
            printf("Si vous voulez les cotes obtenues tapez 1: \n");
            printf("Si vous voulez la cotes maximale tapez 2: \n");
            printf("Si vous voulez la moyenne des cotes obtenues tapez 3: \n");
            scanf("%d",&choix);
    }while(choix<1||choix>3);

    switch(choix){

    case 1:
            printf("Vous avez: %d/20 et %d/20\n",cote1,cote2);
        break;

    case 2:
            if (cote1>cote2) printf("Vous avez: %d/20\n",cote1);
            else printf("Vous avez: %d/20\n",cote1);
        break;

    case 3:
            moy=(cote1+cote2)/2;
            printf("Vous avez une moyenne de %d/20\n",moy);
        break;
    default: printf("Vous avez tapez une autre valeur que 1,2 ou 3.\n");
    }
    return 0;
}
