/*
* Auteur: BASTIN Thomas
* Groupe: 2103
*
* Application:
* Date de dernière mise à jour: 7/10/2020
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

	int x,y,position=0;

    printf("Tapez x\n");
    fflush(stdin);
    scanf("%d",&x);

    printf("Tapez y\n");
    fflush(stdin);
    scanf("%d",&y);

    if(x>0){
		if(y>0){
			position=6;
		}
		else if(y<0){
				position=9;
			 }
			 else{
				position=1;
			 }

    }
    else if(x<0){
			if(y>0){
				position=7;
			}
			else if(y<0){
					position=8;
			}
				 else{
					position=3;
				 }

		}
		else if(y>0){
				position=2;
			 }
			 else if(y<0){
					position=4;
			 }
				  else{
					position=5;
				  }

printf("Votre point est en position %d\n\n\n",position);

printf("                y ^                     \n");
printf("                  |                     \n");
printf("                  |                     \n");
printf("      7           2          6          \n");
printf("                  |                     \n");
printf("                  |                     \n");
printf("                  |                     \n");
printf("----- 3 --------- 5 -------- 1 ---------->\n");
printf("                  |                   x \n");
printf("                  |                     \n");
printf("                  |                     \n");
printf("      8           4          9          \n");
printf("                  |                     \n");
printf("                  |                     \n");


    return 0;
}




