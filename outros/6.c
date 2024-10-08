#include<stdio.h>

int minutos(int h)
{
    int m;

    m=m+(h*60);
    return m;
}

void main()
{
    int m,h,d;
    d=0;

    printf("Horas: ");
    scanf("%d",&h);
    printf("minutos: ");
    scanf("%d",&m);

    if (h<1){
        printf("nao paga");
    }
    if (h>1&&h<3){
        m=minutos(h);
        d=m*0.1;
    }
    if(h>3){
        h=h-3;
        m=minutos(h);
        d=2*60*0.10;
        d=(m*0.20)+d;
    }
    printf("d: %d",d);
}
