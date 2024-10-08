#include<stdio.h>

void main(void)
{
    int d,m,a;

    printf("introduzir o dia: ");
    scanf("%d",&d);
    printf("introduzir o mes: ");
    scanf("%d",&m);
    printf("introduzir o ano: ");
    scanf("%d",&a);
    if (d==28 && m==2){
        m=3;
        d=1;
    }
    else
    if((m==4 || m==6 || m==9 || m==11) && (d==30)){
        m=m+1;
        d=1;
    }
    else
    if(d==31){
        if(m==12){
            d=1;
            m=1;
            a=a+1;
        }
        else
            m=m+1;
            d=1;
    }
    else
        d=d+1;
    printf("\nDia seguinte: %d/%d/%d\n",d,m,a);
}
