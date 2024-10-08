#include<stdio.h>

void main()
{
    float i,imax,imin,n,soma,media;

    imin=10000;
    imax=0;
    soma=0;
    media=0;
    i=1;
    n=0;
    while(i>0){
        printf("Idade: ");
        scanf("%f",&i);
        i=i;
        if(i<imin && i!=0){
            imin=i;
        }
        else
        if(i>imax){
            imax=i;
        }
        soma=i+soma;
        n= n+1;
    }
    media=soma/n;
    printf("Idade Maxima: %f\nIdade Minima: %f\nMedia: %0.1f\n",imax,imin,media);
}
