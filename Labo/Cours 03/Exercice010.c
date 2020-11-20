/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Ecrire un programme qui convertit une t° entière en °C lue au clavier, en °F(valeur réelle)
*
* Date de dernière mise à jour: 23/09/2020
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    float fa;

    printf("Donnez la Temperature en Celcius(Valeur Entiere): \n");
    fflush(stdin);
    scanf("%d",&c);

    fa=((float)(c*9)/5)+32;

    printf("Farenheit: %.2f",fa);

    return 0;
}

