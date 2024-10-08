#include<stdio.h>

void main()
{
    float x,y;
    printf("X: ");
    scanf("%f",&x);
    if (x>0){
    y=sqrt(x);
    printf("y: %0.2f\n",y);
    }
    else
        printf("ERRO!");
}
