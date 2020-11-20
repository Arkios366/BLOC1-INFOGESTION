/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Calculer le montant d'une facture si on donne le prix unitaire d'un produit (htva)
* et la quantittee de produit achetee(TVA 21%). Ensuite convertire en BEF (euro-> BEF *40;3399)
*
* Date de derniere mise a jour: 23/09/2020
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q;
    float pr,prtva,bef;

    printf("Donnez le prix du produit HTVA(en Euros):\n");
    fflush(stdin);
    scanf("%f",&pr);
    printf("Donnez la quantit� de produit:\n");
    fflush(stdin);
    scanf("%d",&q);

    prtva=(q*pr)*(1*(21/(float)100));
    bef=prtva*40,3399;
    printf("le Prix du produit TVA comprise est : %.2f\n En Franc Belges: %.2f",prtva,bef);

    return 0;
}
