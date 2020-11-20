/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application: Un magasin accorde une remise de 10% en cas d'achat de plus de 500€, ou de plus de 200€ pour une famille nbreuse. Sinon on applique une remise de 5% pour tlm
* Date de dernière mise à jour: 7/10/2020
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int enfants;
    float total,totred,reduction;

    printf("Tapez le total\n");
    fflush(stdin);
    scanf("%f",&total);

    while(total<=0){
		printf("Erreur, Entrez une valeur positive non nul:\n");
		fflush(stdin);
		scanf("%f",&total);
    }

    printf("Tapez le nombre d'enfant\n");
    fflush(stdin);
    scanf("%d",&enfants);

    while(enfants<=0){
		printf("Erreur, Entrez une valeur positive non nul:\n");
		fflush(stdin);
		scanf("%d",&enfants);
    }


	if(total>500||(total>200&&enfants>2)){
		reduction=total*5/100;
		totred=total-reduction;
		printf("\n-10 pourcent\n");
	}
	else{
		reduction=total*5/100;
		totred=total-reduction;
		printf("\n-5 pourcent\n");
	}

	printf("Total Sans reduction: %.2f\nReduction: -%.2f\nTotal a payer: %.2f",total,reduction,totred);

    return 0;
}


