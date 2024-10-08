#include<stdio.h>

void main()
{
    int a,b,aux,au;

    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);

    aux=a;
    au=b;
    b=aux;
    a=au;

    printf("\nA:%d\nB:%d\n",a,b);
}
