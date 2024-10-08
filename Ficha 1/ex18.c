#include<stdio.h>

void main()
{
    double x,y;
    printf("Introduzir o valor do x:  ");
    scanf("%lf", &x);
    printf("Introduzir o valor do y:  ");
    scanf("%lf", &y);
    if(x==0){
        if(y==0){
            printf("O ponto é a origem!");
        }
        else
            printf("O ponto pertence ao eixo dos ys!");
    }
    else
        if(y==0){
        printf("O ponto pertence ao eixo dos xs!");
        }
        else
            if(x<0){
                if (y<0){
                    printf("O ponto pertence ao terceiro quadrante");
                }
                else
                    printf("O ponto pertence ao segundo quadrante");
            }
            else
                if(y<0){
                        printf("O ponto pertence ao quarto quadrante");
                }
                else
                printf("O ponto pertence ao primeiro quadrante");
}
