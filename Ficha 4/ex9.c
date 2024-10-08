#include<stdio.h>

void main()
{
    int po,t,max,n;
    t=0;
    max=1;
    n=1;
    do
    {
        printf("Numero: ");
        scanf("%d",&n);
        t++;
        if(n>max){
            max=n;
            po=t;
        }
    }
    while(n>0);
    t=t-1;
    printf("Maximo: %d  Surgiu na posicao: %d  Tamanho da sequencia: %d",max,po,t);
}
