/*
* Auteur: BASTIN Thomas
* Groupe: 2103
* Application: Ecrire un prog qui résoud l'équation du 1er degré ax+b=0
*
* Date de derniere mise a jour: 1/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    float x;

    printf("Tapez la valeur de a: \n");
    fflush(stdin);
    scanf("%d",&a);

    printf("Tapez la valeur de b: \n");
    fflush(stdin);
    scanf("%d",&b);

    if(a==0){
            if(b==0){
            printf("Equation indeterminee");
            }
            else printf("Equation impossible car a=%d et b=%b",a,b);
    }
    else{

        x=(float)(-b)/a;
        printf("x=-%d/%d=%.2f",b,a,x);
    }
    return 0;
}

