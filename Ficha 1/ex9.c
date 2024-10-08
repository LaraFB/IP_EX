#include<stdio.h>

void main()
{
    const double TVC=0.75;
    const double TCP=0.25;
    const double TVCB=0.6;
    const double TVCT=0.4;
    double u,cp,vct,vcb,vc;

    printf("Introduzir a quantidade de uvas em kg: ");
    scanf("%lf",&u);
    cp=u*TCP;
    vc=u*TVC;
    vct=cp*TVCT;
    vcb=cp+TVCB;
    printf("Consumo pessoal %0.1lf\nConsumo da cooperativa %0.1lf\nProducao de vinho branco %0.1lf\nProducao de vinho tinto %0.1lf",cp,vc,vcb,vct);
}
