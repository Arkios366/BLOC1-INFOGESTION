/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Ecrire un programme qui convertit une t° entière en Farhenheit lue au clavier, en °C(valeur réelle)
*
* Date de dernière mise à jour: 23/09/2020
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fa;
    float c;

    printf("Donnez la Temperature en Farenheit(Valeur Entiere): \n");
    fflush(stdin);
    scanf("%d",&fa);

    c=((float)fa-32)*((float)5/9);

    printf("%f",c);

    return 0;
}
