/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Sachant que le premier Avril 2015 �tait un jeudi quel jour de la semaine �tait le 4 Mai.
*
* Date de derni�re mise � jour: 23/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,r,e;
    fflush(stdin);
    printf("tapez A");
    scanf("%d",&a);
    printf("tapez B");
    scanf("%d",&b);
    e=a/b;
    r=a%b;
    printf("DivEntier %d\nReste %d",e,r);

    return 0;
}

