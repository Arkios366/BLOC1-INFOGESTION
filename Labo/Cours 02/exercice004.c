#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h=0,b=0,B=0;
	float trpz,a=0;
    fflush(stdin);

    printf("Donnez la valeur de la petite base: \n");
    scanf("%d",&b);

    printf("Donnez la valeur de la Grande base: \n");
    scanf("%d",&B);

    printf("Donnez la valeur de la hauteur: \n");
    scanf("%d",&h);

    trpz=((B+b)*h);
	a=trpz/2;
	
    printf("b=%d\nB=%d\nh=%d\nL'aire du trapeze vaut %f\n",b,B,h,a);
    return 0;
}
