#include<stdio.h>

int ler(int n)
{
    do{
            printf("Introduzir um numero: ");
            scanf("%f",&n);
    }
    while(n>999 || n<100);
return n;
}

void main()
{
    int n;

    printf("Numero: %f",ler(n));
}
