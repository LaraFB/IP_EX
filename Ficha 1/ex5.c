#include<stdio.h>

void main()
{
    int nv, nc,nvendas;
    double s,sm,c;
    const double D=0.05;

    printf("Introduzir o numero de vendedor: ");
    scanf("%d",&nv);
    printf("Introduzir o numero de carros: ");
    scanf("%d",&nc);
    printf("Introduzir o numero de vendas: ");
    scanf("%d",&nvendas);
    printf("Introduzir o salario: ");
    scanf("%lf",&s);
    printf("Introduzir a comissao: ");
    scanf("%lf",&nv);
    sm=s+c*nc+nvendas*D;
    printf("O salário mensal %0.2lf",sm);
}
