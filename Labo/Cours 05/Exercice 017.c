/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: crire un programme qui vérifie si un nombre entier donnez par l'utilisateur est pair ou impair
*
* Date de dernière mise à jour: 30/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Tapez Un nombre Entier: \n");
    fflush(stdin);
    scanf("%d",&n);

    if(n%2==0) printf("%d est pair.\n",n);
    else printf("%d est impair.\n",n);
    return 0;
}

