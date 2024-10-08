#include<stdio.h>

void main()
{
    int a,b,c,aux;

    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);
    aux=a-b;
    while (aux<0){
        aux= 0-aux;
    }
        if(aux<c&&c<a+b){
                printf("Triangulo!\n");
        }
        else
            printf("Nao e um triangulo!\n");
}
