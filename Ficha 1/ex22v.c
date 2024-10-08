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
    switch(m){
        case 1:
            if(d==31){
                m=m+1;
                d=1;
            }
            else
                d=d+1;
        break;
        case 12:
                if(d==31){
                        d=1;
                        m=1;
                        a=a+1;
                }
                        else
                            d=d+1;
        break;
        case 2:
            if(d==28){
                m=m+1;
                d=1;
            }
            else
                d=d+1;

        break;
        case 4:
        case 6:
        case 9:
        case 11:
                 if(d==30){
                        m=m+1;
                        d=1;
                        }
                        else
                            d=d+1;
        break;
        default:
                if(d==31){
                        m=m+1;
                        d=1;
                }
                else
                    d=d+1;
    }
    printf("Dia seguinte: %d/%d/%d\n",d,m,a);
}

