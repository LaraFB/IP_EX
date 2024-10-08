#include<stdio.h>

void main()
{
    double o,dss,dirs,vl;
    const double SS=0.11;
    const double IRS=0.25;

    printf("Ordenado: ");
    scanf("%lf",&o);
    dss= SS*o;
    dirs=IRS*o;
    vl=o-(dss+dirs);
    printf("O vencimento liquido %lf\nseguranca social: %lf\nIRS: %lf",vl,dss,dirs);
}
