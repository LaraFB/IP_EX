#include<stdio.h>

void main()
{
    int a,n;
    int p=1;

    printf("Introduzir a base: ");
    scanf("%d",&a);
    printf("Introduzir a potencia: ");
    scanf("%d",&n);
    while(n>0){
        p=p*a;
        n=n-1;
    }
    printf("%d\n",p);
}
