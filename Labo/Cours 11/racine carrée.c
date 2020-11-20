/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application :		Ecrire un programme qui calcule une équation du second degré:
* Date de derniere mise a jour: 27/10/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,b,c,delta;
	float x1,x2;

	printf("Tapez la valeur de a :");
	fflush(stdin);
	scanf("%d",&a);

	printf("Tapez la valeur de b :");
	fflush(stdin);
	scanf("%d",&b);

	printf("Tapez la valeur de c :");
	fflush(stdin);
	scanf("%d",&c);




	if(a==0){
			if (b==0){
				if(c==0){
					printf("Equation vaut 0");
				}
				else{
					printf("Equation indéterminée.");
				}
			}
			else{
				x1=(-c)/(float)(2*b);
				printf("x=-%d/2*%d = %.4f\n",b,a,x1);
			}
	}



	else{

		delta=(b*b)-4*a*c;
		printf("Delta =%d\n",delta);
		if(delta>0){

				x1=(-b-sqrt((float)delta))/(2*a);
				printf("x=-%d-racine(%d)/2*%d = %.4f\n",b,delta,a,x1);

				x2=(-b+sqrt((float)delta))/(2*a);
				printf("x=-%d+racine(%d)/2*%d = %.4f\n",b,delta,a,x2);

		}
		else{
				if(delta<0){
						printf("Le delta est négatif, il n'a pas de solution.");
				}
				else{
					x1=(-b)/(float)(2*a);
					printf("x=-%d/2*%d = %.4f\n",b,a,x1);
				}
		}
	}

return 0;
}
