#include<stdio.h>

void main()
{
    int f,d,c,p;
    float r,xc,yc,x,y,distancia;
    f=0;
    d=0;
    c=0;

    printf("Numero de pontos: ");
    scanf("%d",&p);
    printf("Raio: ");
    scanf("%f",&r);
    printf("Centro x,y: ");
    scanf("%f,%f",&xc,&yc);
    do{
            printf("Ponto x,y: ");
            scanf("%f,%f",&x,&y);
            distancia=sqrt((x-xc)*(x-xc)+(y-yc)*(y-yc));
            if(distancia>r){
                f=f+1;
                p=p-1;
            }
            else
            if(distancia<r){
                d=d+1;
                p=p-1;
            }
            else
                c=c+1;
                p=p-1;
    }
    while(p>=0);
    printf("Pontos fora da circunferencia: %d\nPontos dentro da circunferencia: %d\nPontos na circunferencia: %d\n",f,d,c);
}
