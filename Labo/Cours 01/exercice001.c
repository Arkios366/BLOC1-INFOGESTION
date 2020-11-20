#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,somme;
    fflush(stdin);

    printf("Donne une première valeur: \n");
    scanf("%d",&a);

    printf("Donne une seconde valeur: \n");
    scanf("%d",&b);

    somme=a+b;

    printf("%d+%d=%d\n",a,b,somme);
    return 0;
}
