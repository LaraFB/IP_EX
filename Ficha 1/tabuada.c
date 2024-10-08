#include<stdio.h>

void main()
{
    int n,t;
    int m=0;

    printf("Introduzir numero: ");
    scanf("%d",&n);
    while (m<=10){
        t=n*m;
        printf("%d*%d= %d\n",n,m,t);
         m=m+1;
    }
}
