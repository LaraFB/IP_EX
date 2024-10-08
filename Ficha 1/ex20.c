#include<stdio.h>

void main(void)
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
                if(a!=b && b!=c){
                    printf("O triangulo escaleno!\n");
                }
                else
                if(a==b && b ==c){
                    printf("O triangulo equilatero!\n");
                }
                else
                   printf("O triangulo isosceles!\n");
        }
        else
            printf("Nao e um triangulo!\n");
}
