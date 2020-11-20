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
    int n,r,b500,b200,b100,b50,b20,b10,b5,p2,p1,c50,c20,c10,c5,c2,c1;
    float somme;
    printf("Tapez la somme en euros: \n");
    fflush(stdin);
    scanf("%f",&somme);

    while(somme<0){
        printf("La valeur %f est impossible, car c'est un nombre négatif.\nTapez une autre valeur:\n\n\n",somme);
        fflush(stdin);
        scanf("%f",&somme);
    }

    //On décale la virgule de 2 à droite, ensuite on caste la valeur en entier, dans une variable n
    n=(int)(somme*100);

    b500=n/50000;
    r=n%50000;
    b200=r/20000;
    r=r%20000;
    b100=r/10000;
    r=r%10000;
    b50=r/5000;
    r=r%5000;
    b20=r/2000;
    r=r%2000;
    b10=r/1000;
    r=r%1000;
    b5=r/500;
    r=r%500;

    p2=r/200;
    r=r%200;
    p1=r/100;
    r=r%100;

    c50=r/50;
    r=r%50;
    c20=r/20;
    r=r%20;
    c10=r/10;
    r=r%10;
    c5=r/5;
    r=r%5;
    c2=r/2;
    r=r%2;
    c1=r;

    //Affichage des différents billets/pièces
    printf("La somme de %.2f Euros vaut :\n\n\n",somme);

    if(b500!=0) printf("%d Billet de 500 Euros.\n",b500);
    if(b200!=0) printf("%d Billet de 200 Euros.\n",b200);
    if(b100!=0) printf("%d Billet de 100 Euros.\n",b100);
    if(b50!=0) printf("%d Billet de 50 Euros.\n",b50);
    if(b20!=0) printf("%d Billet de 20 Euros.\n",b20);
    if(b10!=0) printf("%d Billet de 10 Euros.\n",b10);
    if(b5!=0) printf("%d Billet de 5 Euros.\n",b5);

    if(p2!=0) printf("%d Pieces de 2 Euros.\n",p2);
    if(p1!=0) printf("%d Pieces de 1 Euros.\n",p1);

    if(c50!=0) printf("%d Pieces de 50 Cents.\n",c50);
    if(c20!=0) printf("%d Pieces de 20 Cents.\n",c20);
    if(c10!=0) printf("%d Pieces de 10 Cents.\n",c10);
    if(c5!=0) printf("%d Pieces de 5 Cents.\n",c5);
    if(c2!=0) printf("%d Pieces de 2 Cents.\n",c2);
    if(c1!=0) printf("%d Pieces de 1 Cents.\n",c1);

    return 0;
}
