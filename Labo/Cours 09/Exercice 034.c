/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application (B5): L'utilisateur doit donner 2 nombres. Le programme détermine le plus grand commun diviseur de ces 2 nombres.
*
*                   Algorithme: tant que les 2 nombres sont différent on soustrait du plus grand la valeur de
*                               l'autre et on recommence la comparaison jusqu'à arriver à 2 nombres égaux.
*
* Date de derniere mise a jour: 15/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,ma,mi;

    printf("Tapez la première valeurs:");
    fflush(stdin);
    scanf("%d",&a);

    printf("Tapez la seconde valeurs:");
    fflush(stdin);
    scanf("%d",&b);

    if(a==b)printf("\n\n PGDC=%d",a);
    else{

        if(a>b){
                ma=a;
                mi=b;
        }
        else{
                ma=b;
                mi=a;
        }
                    /*tant que les 2 nombres sont différent on soustrait du plus grand la valeur de
                    * l'autre et on recommence la comparaison jusqu'à arriver à 2 nombres égaux.
                    */
        while(ma!=mi){
                if(ma>mi)ma=ma-mi;
                else mi=mi-ma;
        }

        printf("Le PGDC de %d et %d  = %d",a,b,ma);


    }
    return 0;
}
