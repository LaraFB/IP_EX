#include<stdio.h>
void main()
{
    float v,b,n, num_eleitores;
    float pv,pb,pn;

    printf("Introduza o numero de votos validos: ");
    scanf("%f",&v);
    printf("Introduza o numero de votos em branco: ");
    scanf("%f",&b);
    printf("Introduza o numero de votos nulos: ");
    scanf("%f",&n);
    num_eleitores=v+b+n;
    pv=v/num_eleitores*100;
    pb=b/num_eleitores*100;
    pn=n/num_eleitores*100;
    printf("Numero de eleitores: %f\nPercentagem de votos brancos: %f\nPercentagem de votos validos: %f\nPercentagem de votos nulos: %f\n",num_eleitores,pb,pv,pn);
}
