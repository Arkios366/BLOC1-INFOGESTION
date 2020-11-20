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

	int x,y,position;

    printf("Tapez x\n");
    fflush(stdin);
    scanf("%d",&x);

    printf("Tapez y\n");
    fflush(stdin);
    scanf("%d",&y);

    if(x>0&&y==0)	 position=1;
    if(x==0&&y>0)	 position=2;
    if(x<0&&y==0)	 position=3;
    if(x==0&&y<0)	 position=4;
    if(x==0&&y==0)	 position=5;
    if(x>0&&y>0)	 position=6;
    if(x<0&&y>0) 	 position=7;
    if(x<0&&y<0)	 position=8;
    if(x>0&&y<0) 	 position=9;

    printf("Vous etes en position : %d\n\n\n",position);

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



