#include<stdio.h>

void main()
{
    int a,b,c,d,e,f,i,j,y,soma;
    soma=0;
    printf("Introduzir a: ");
    scanf("%d",&a);
    printf("Introduzir b: ");
    scanf("%d",&b);
    printf("Introduzir c: ");
    scanf("%d",&c);
    printf("Introduzir d: ");
    scanf("%d",&d);
    printf("Introduzir e: ");
    scanf("%d",&e);
    printf("Introduzir f: ");
    scanf("%d",&f);
    while (a<b){
        while(c<d){
            while(e<f){
                soma=soma+a*b*c;
                e=e+1;

            }
            c=c+1;
        }
        a=a+1;
    }
    printf("Somatorio triplo: %d",soma);
}
