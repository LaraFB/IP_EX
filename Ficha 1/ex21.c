#include <stdio.h>

void main()
{
    float x,y;

    printf("x: ");
    scanf("%f",&x);
    if(x<=-4){
        y=(x-1)*(x-1)-2*x+3;
    }
    else
        if(x>3){
            y=sqrt(x-2)*5;
            }
    else
    y=x/2-5;
    printf("%0.2f",y);
}
