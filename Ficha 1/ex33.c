#include<stdio.h>
#include <locale.h>

void main()
{
    int N,r,d,aux,nd;
    nd=0;
    aux=0;
    setlocale(LC_ALL, "Portuguese");

    printf(" Obt�m n�mero: ");
    scanf("%d",&N);
    do{
        r=N%d;
        if(r==0){
            aux=d+aux;
            nd=nd+1;
        }
        d=d+1;
    }
    while(d<N);

    if(aux<=N){
        printf("O n�mero � perfeito!");
    }
    printf("N�mero de divisores � = %d ",nd);
}
