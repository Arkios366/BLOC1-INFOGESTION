#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,qe=0,r=0;
    float qr;
    fflush(stdin);

    printf("Donnez la valeur: \n");
    scanf("%d",&a);

    printf("Donnez la valeur: \n");
    scanf("%d",&b);

    qe=a/b;
    r=a-(qe*b);
    qr=(float)(a)/b;

    printf("\nLe qotient entier vaut %d et son reste = %d\n",qe,r);
    printf("\nLe qotient reelle vaut %f\n",qr);
    return 0;
}
