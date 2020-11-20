/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: On entre 2 valeurs entières, et un oppérateur(sous forme d'un char), *,/,+,-
*
*Date de dernière mise à jour: 1/10/2020
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float r;
    char choix;

    printf("Pour calculer la surface d'un cercle tapez 'c'.\n");
    printf("Pour calculer la surface d'un rectangle tapez 'r'.\n");
    printf("Pour calculer la surface d'un triangle tapez 't'.\n");

    fflush(stdin);
    choix=getchar();

    while(choix!='c'&&choix!='r'&&choix!='t'){
            printf("Vous n'avez pas tapez 'c','r','t'.\n");
            fflush(stdin);
            choix=getchar();
    }



    if(choix=='c'){
            printf("Tapez la valeur du rayon:\n");
            fflush(stdin);
            scanf("%d",&a);

            r=2*3.14*(a*a);
            printf("2*pi*%d^2=%.4f",a,r);
    }

    if(choix=='r'){
            printf("Tapez la longueur:\n");
            fflush(stdin);
            scanf("%d",&a);
            printf("Tapez la Largeur:\n");
            fflush(stdin);
            scanf("%d",&b);

            r=a*b;
            printf("%d*%d=%.0f",a,b,r);
            }

    if(choix=='t'){
            printf("Tapez la Base:\n");
            fflush(stdin);
            scanf("%d",&a);
            printf("Tapez la Hauteur:\n");
            fflush(stdin);
            scanf("%d",&b);

            r=(a*b)/2;
            printf("(%d*%d)/2=%.4f",a,b,r);
    }
    return 0;
}

