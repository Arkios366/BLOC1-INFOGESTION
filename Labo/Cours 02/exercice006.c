#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,tempons;
    fflush(stdin);

    printf("Donnez la valeur de a:\n");
    scanf("%d",&a);
    printf("Donnez la valeur de b:\n");
    scanf("%d",&b);

    tempons=a;
    a=b;
    b=tempons;

    printf("\na=%d\nb=%d\n",a,b);
    return 0;
}
