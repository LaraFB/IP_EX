#include<stdio.h>

void main()
{
    int n,d,soma;

    printf("Numero: ");
    scanf("%d",&n);
    for (soma=0;n>0;n=n/10)
    {
        d=n%10;
        soma=soma+d;
    }
    printf("Soma: %d\n",soma);
}
