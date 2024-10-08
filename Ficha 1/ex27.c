#include<stdio.h>

void main()
{
    int n,ni,np;
    np=0;
    ni=0;
    do{
        printf("Introduzir numero: ");
        scanf("%d",&n);
        if(n%2==0){
            np=np+1;
        }
        else
            ni=ni+1;
    }
    while(n>0);
    printf("Numeros pares: %d\nNumeros impares: %d\n",np,ni);
}
