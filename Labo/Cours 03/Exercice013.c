/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Une bille de plomb est lachée du haut d'un immeuble et tombe en chute libre. Au bout d'1 temps t(sec), la bille est descendue d'1 hauteur
*              h=1/2*g*t^2 g=9,81m/s^2.
* Date de dernière mise à jour: 23/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int ask;
    float h,t;

    printf("Si vous voulez calculer la hauteur de chute tapez 1:\nSi vous voulez calculer le temps ecouler pour une chute tapez 2: \n");
    fflush(stdin);
    scanf("%d",&ask);


    /*Calcul de la hauteur de chute == 1
    *Clacul du temps écouler pour une chute de hauteur h !=1*/

    if(ask!=1){
        printf("Tapez la hauteur en m: \n");
        fflush(stdin);
        scanf("%f",&h);

        t=sqrt(2*h/9.81);

        printf("sqrt(2*%.2f/g)= %.3f s\n",h,t);


    }
    else{
        printf("Tapez le temps en s: \n");
        fflush(stdin);
        scanf("%f",&t);

        h=(0.5*9.81)*pow(t,2.0);

        printf("(0,5*9,81)*%.2f^2= %.3f m\n",t,h);
    }
    return 0;
}



