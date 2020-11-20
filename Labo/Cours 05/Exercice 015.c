/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Ecrire un programme qui transforme une somme d'argent en billet/pièces
*
* Date de dernière mise à jour: 30/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,r,b500,b200,b100,b50,b20,b10,b5,p2,p1;
    printf("Tapez la somme en euros: \n");
    fflush(stdin);
    scanf("%d",&n);

    while(n<0){
        printf("La valeur %d est impossible, car c'est un nombre négatif.\nTapez une autre valeur:\n\n\n",n);
        fflush(stdin);
        scanf("%d",&n);
    }

    b500=n/500;
    r=n%500;
    b200=r/200;
    r=r%200;
    b100=r/100;
    r=r%100;
    b50=r/50;
    r=r%50;
    b20=r/20;
    r=r%20;
    b10=r/10;
    r=r%10;
    b5=r/5;
    r=r%5;

    p2=r/2;
    r=r%2;
    p1=r;

    //Affichage des différents billets/pièces
    printf("La somme de %d Euros vaut :\n\n\n",n);

    if(b500!=0) printf("%d Billet de 500 Euros.\n",b500);
    if(b200!=0) printf("%d Billet de 200 Euros.\n",b200);
    if(b100!=0) printf("%d Billet de 100 Euros.\n",b100);
    if(b50!=0) printf("%d Billet de 50 Euros.\n",b50);
    if(b20!=0) printf("%d Billet de 20 Euros.\n",b20);
    if(b10!=0) printf("%d Billet de 10 Euros.\n",b10);
    if(b5!=0) printf("%d Billet de 5 Euros.\n",b5);

    if(p2!=0) printf("%d Pieces de 2 Euros.\n",p2);
    if(p1!=0) printf("%d Pieces de 1 Euros.\n",p1);

    return 0;
}
