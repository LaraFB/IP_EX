#include<stdio.h>

void main()
{
    float n,p,soma,mp,m;
    soma=0;
    mp=0;

    do{
        printf("Introduzir o peso: ");
        scanf("%f",&p);
         if(p>60){
          soma=soma+p;
          n=n+1;
          }
          else
             if(mp<p){
                 mp=p;
            }
    }
    while (p>0);
    m=soma/n;
    printf("Media: %0.1f\nMaior peso: %f", m,mp);
}
