/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application : LABO 2
*
* Date de derniere mise a jour: 20/11/2020
*/

#include <stdio.h>
#include <stdlib.h>

int inter(char choix1, int x1,int y1, int x2, int y2);
int coefdir(char choix,float a,float b);


int main(){
	int x1,y1,x2,y2,dx,dy;
	float a,b;
	char choix1,choix2;

									//Entrée de x1,x2,x3,x4
	printf("Entrer x1:\n");
	fflush(stdin);
	scanf("%d",&x1);

	printf("Entrer y1:\n");
	fflush(stdin);
	scanf("%d",&y1);

	printf("Entrer x2:\n");
	fflush(stdin);
	scanf("%d",&x2);

	printf("Entrer y2:\n");
	fflush(stdin);
	scanf("%d",&y2);


									//Calcul de l'équation et delta
	dy=y2-y1;
	dx=x2-x1;

	a=(float)dy/dx;
	b=y1-a*x1;

									//Affichage de l'équation
	printf("y=%.2fx+%.2f\n\n",a,b);

									//Quelle méthode choisi t'on ?
	do{
		printf("Choisissez votre methode : \n");
		printf("\nPour faire le calcul avec une interpollation lineaire 	        tapez i.\n");
		printf("\nPour faire le calcul avec le coefficient directeur 		tapez c.\n");
		fflush(stdin);
		choix2=getchar();
	}while(choix2!='i'&&choix2!='c');


										//Entre x ou y ?
	do{
		printf("\n\nVous connaissez x ou y ?\n");
		fflush(stdin);
		choix1=getchar();
	}while(choix1!='x'&&choix1!='y');


	switch(choix2){
		case 'i':
				inter(choix1,x1,y1,x2,y2);
			break;
		case 'c':
				coefdir(choix1,a,b);
			break;

	}
return 0;
}

													//Calcul en fonction de x ou y via Interpolation Linéaire.
int inter(char choix1, int x1,int y1, int x2, int y2){

	float x,y;

	if(choix1=='x'){

			printf("Tapez la valeur de %c\n",choix1);				//On prend la valeur de x
			fflush(stdin);
			scanf("%f",&x);

			if(x2-x1==0){
				printf("div/0 error, x2-x1==0");
			}
			else{
				y=((float)(y2-y1)/(x2-x1))*(x-x1)+y1;							//recherche & affichage de y
				printf("y= %.2f\n",y);
			}


	}

	else {
			printf("Tapez la valeur de %c\n",choix1);				//On prend la valeur de y
			fflush(stdin);
			scanf("%f",&y);

			if(y2-y1==0){
				printf("div/0 error, y2-y1==0");
			}
			else{
				x=((float)(x2-x1)/(y2-y1))*(y-y1)+x1;	 						//recherche & affichage de x
				printf("x= %.2f\n",x);
			}

	}
	return 0;
}


													//Calcul en fonction de x ou y via coefficient directeur
int coefdir(char choix1,float a,float b){

	float x,y;

	if(choix1=='x'){

			printf("Tapez la valeur de %c\n",choix1);				//On prend la valeur de x
			fflush(stdin);
			scanf("%f",&x);

			y=a*x+b;												//recherche & affichage de y
			printf("y= %.2f\n",y);
	}

	else {
		if(a==0){													//Vérification de la div/0
			printf("div/0 valeur indefinie.\n");
		}
		else{
			printf("Tapez la valeur de %c\n",choix1);				//On prend la valeur de y
			fflush(stdin);
			scanf("%f",&y);

			x=(y-b)/a;												//recherche & affichage de x
			printf("x= %.2f\n",x);
		}
	}
	return 0;
}
