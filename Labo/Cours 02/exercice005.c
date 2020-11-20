#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float ab, moyenne;
    fflush(stdin);

    printf("Donnez la valeur: \n");
    scanf("%d",&a);

    printf("Donnez la valeur: \n");
    scanf("%d",&b);

    ab=(a+b);
    moyenne=ab/2;

    printf("\nLa moyenne arithmetique est de %f\n",moyenne);
    return 0;
}
