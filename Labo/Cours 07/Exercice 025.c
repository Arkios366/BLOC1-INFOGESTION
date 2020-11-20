/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: On entre le nbre d'appels d'une entreprise et on calcule le coup, (<100 30€, entre 101 et 200 0,15 par appel, plus de 200 0,1 par appel)
*
*Date de dernière mise à jour: 7/10/2020
*/




#include<stdio.h>
#include<stdlib.h>

int main(){

    int appels;
    float r;

    printf("Tapez le nombre d'appels\n");
    fflush(stdin);
    scanf("%d",&appels);

    if(appels>200){
        r=45+0.1*(appels-200);
    }
    else{
        if(appels>100){
                r=30+0.15*(appels-100);
        }
        else{
            r=30;
        }
    }
    printf("%d appels = %.2f Euros",appels,r);

    return 0;
}

