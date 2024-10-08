#include<stdio.h>

void main()
{
    double nlg,e,l,m,cki,ckf,k;
    const double P=1.3;

    printf("Introduzir o valor de km inicial: ");
    scanf("%lf", &cki);
    printf("Introduzir o valor de km final: ");
    scanf("%lf", &ckf);
    printf("Introduzir o valor de litros gastos: ");
    scanf("%lf", &nlg);
    printf("Introduzir o valor recebido dos passageiros: ");
    scanf("%lf", &e);
    k=ckf-cki;
    l= e-(nlg*P);
    m=k/nlg;
    printf("Lucro: %0.2lf\n media do consumo: %0.2lfkm/l",l,m);

}
