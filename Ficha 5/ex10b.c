#include<stdio.h>

int ler(int n)
{
    do{
            printf("Introduzir um numero: ");
            scanf("%d",&n);
    }
    while(n>999 || n<100);
return n;
}

void main()
{
    int n;

    printf("Numero: %d",ler(n));
}
