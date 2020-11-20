#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0,p=0,a=0;
    fflush(stdin);

    printf("Donnez la valeur d'un cote du carre: \n");
    scanf("%d",&c);

    p=4*c;
    a=c*c;

    printf("\nLe perimetre du carre vaut %d\nL'aire du carre vaut %d\n",p,a);
    return 0;
}
