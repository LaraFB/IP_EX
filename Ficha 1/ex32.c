#include<stdio.h>

void main()
{
    int n,d,soma;

    printf("Numero: ");
    scanf("%d",&n);
    soma=0;
    while(n>0){
        d=n%10;
        soma=soma+d;
        n=n/10;
    }
    printf("Soma: %d\n",soma);
}
