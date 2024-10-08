#include<stdio.h>

void main()
{
    double a,p;
    printf("Introduzir peso do atleta em quilogramas: ");
    scanf("%lf",&p);
    printf("Introduzir altura do atleta em metros: ");
    scanf("%lf",&a);
    if(p<=80 & p>=70){
        if(a<=1.90 & a>=1.75){
                printf("Aceite!");
        }
        else
            printf("Recusado por altura");
    }
    else
        if(a<=1.90 & a>=1.75){
            printf("Recusado por peso");
    }
    else
        printf("Totalmente recusado");
}
