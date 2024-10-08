#include<stdio.h>

void main()
{
    int po,t,max,n;

    printf("Numero: ");
    scanf("%d",&n);
    for(t=po=1,max=n;n>0;t++)
    {
        printf("Numero: ");
        scanf("%d",&n);
        if(n>max){
            max=n;
            po=t;
        }
    }
    printf("Maximo: %d  Surgiu na posicao: %d  Tamanho da sequencia: %d",max,po,t-1);

}

