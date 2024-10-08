#include<stdio.h>

int s(int n)
{
    int d,soma;
    soma=0;
    while(n>0){
        d=n%10;
        n=n/10;
        soma=soma+d;
    }

    return soma;
}

void main()
{
    int n,d,soma;

    printf("Numero: ");
    scanf("%d",&n);
    soma=s(n);
    printf("Soma: %d\n",soma);
}
