/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: La masse volumique d'un béton armé = 2400kg/m3
*On demande d'écrire un programme qui calcule le poid d'un mur en B.A. de 5m de longueur,
*Selon le type de section choisie : 1) Rectangle
*                                   2) Trapèzoïdale
*                                   3) T renversé
*Calcule le poid du mur
*
* Date de derniere mise a jour: 15/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choix,a,b,c,d;
    float volume,masse;


    do{
        printf("Pour une hauteur de 5m,\net un beton de masse volumique de 2400kg/m3\n");
        printf("Si vous voulez calculez\nle poid pour une section en forme de Rectangle,     Tapez 1:\n");
        printf("Si vous voulez calculez\nle poid pour une section en forme de Trapeze,       Tapez 2:\n");
        printf("Si vous voulez calculez\nle poid pour une section en forme de T Renverse,    Tapez 3:\n");
        fflush(stdin);
        scanf("%d",&choix);
    }while(choix<1||choix>3);


    switch(choix){

    case 1: //calcul pour un rectangle (longueur x largeur x hauteur(=5m))
        printf("Tapez la longueur (en m)\n");
        fflush(stdin);
        scanf("%d",&a);

        printf("Tapez la Largeur (en m)\n");
        fflush(stdin);
        scanf("%d",&b);

        volume=a*b*5;
        break;

    case 2://calcul pour un trapèze ()

        printf("Tapez la petite base (en m)\n");
        fflush(stdin);
        scanf("%d",&a);

        printf("Tapez la grande Base (en m)\n");
        fflush(stdin);
        scanf("%d",&b);

        printf("Tapez la Hauteur (en m)\n");
        fflush(stdin);
        scanf("%d",&c);


        volume=((a*b*c)/2.0)*5;
        break;

    case 3://calcul pour un T Renversé ()

        printf("Tapez la longueur 1 (en m)\n");
        fflush(stdin);
        scanf("%d",&a);

        printf("Tapez la Largeur 1 (en m)\n");
        fflush(stdin);
        scanf("%d",&b);

        printf("Tapez la longueur 2 (en m)\n");
        fflush(stdin);
        scanf("%d",&c);

        printf("Tapez la Largeur 2 (en m)\n");
        fflush(stdin);
        scanf("%d",&d);

        volume=((a*b)+(c*d))*5;
        break;
    }

    masse=volume*2400;

    printf("Pour un volume de %.2f m3, le poid est de %.2f Kg\n",volume,masse);

    return 0;
}

