/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: (if else), Pour noter un examen le prof applique le barème suivant:
*                                1: Si 90<=cote<=100 : PGD
*                                2: si 80<=cote<=89  : GD
*                                3: si 70<=cote<=79  : Dis
*                                4: si 60<=cote<=69  : Satisfaisant
*                                5: si 50<=cote<=59  : Réussite simple
*                                6: si cote<50       : Echec
*
*Date de dernière mise à jour: 7/10/2020
*/




#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;

    printf("Tapez la cote sur 100\n");
    fflush(stdin);
    scanf("%d",&n);

    if(n<0 || n>100)

    if(n<50){
        printf("Echec");
    }
    else{

        if(n<60){
            printf("Réussite simple");
        }
        else{

            if(n<70){
                printf("Satis");
            }
            else{
                 if(n<80){
                    printf("Dis");
                 }
                 else{
                      if(n<90){
                        printf("GD");
                      }
                      else {
                        printf("PGD");
                      }
                 }
            }
        }
    }
    return 0;

}
