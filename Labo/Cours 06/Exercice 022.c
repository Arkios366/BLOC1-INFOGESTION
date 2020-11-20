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

    printf("Pour faire une addition tapez +.\n");
    printf("Pour faire une soustraction tapez -.\n");
    printf("Pour faire une division tapez /.\n");
    printf("Pour faire une multiplication tapez *.\n");

    fflush(stdin);
    scanf("%c",&choix);

    while(choix!='+'||choix!='-'||choix!='*'||choix!='/'){
            printf("Vous n'avez pas tapez '+','-','*','/' .\n");
            fflush(stdin);
            scanf("%c",&choix);
    }


    printf("Tapez la valeur Entiere A :\n");
    fflush(stdin);
    scanf("%d",&a);

    printf("Tapez la valeur Entiere de B :\n");
    fflush(stdin);
    scanf("%d",&b);



    switch(choix){

        case '+':   r=a+b;
                    printf("%d+%d=%.0f",a,b,r);
                break;

        case '-':   r=a-b;
                    printf("%d-%d=%.0f",a,b,r);
                break;

        case '/':   if(b==0) printf("%d/0 est impossible, tapez une autre valeur pour B",a);
                    else{
                    r=(float)a/b;
                    printf("%d/%d=%.4f",a,b,r);
                    }
                break;

        case '*':   r=a*b;
                    printf("%d*%d=%.0f",a,b,r);
                break;

        default: printf("Il semblerais que vous vous soyez trompé lors du choix d'opperation mathematique. Le programme ne peux continuer");
                 break;
        }
    return 0;
}
