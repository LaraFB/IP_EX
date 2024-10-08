#include<stdio.h>

void main()
{
    float f,c;

    printf("Introduzir graus em Fahrenheit: ");
    scanf("%f",&f);

    c=(f-32);
    c=c*5/9;

    printf("\nTemperatura em Celsius: %0.2f\n",c);
}
