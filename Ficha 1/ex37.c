#include<stdio.h>

void main()
{
    int n,op,r;
    op=0;

    printf("Introduzir um numero: ");
    scanf("%d",&n);
    while(n!=1){
        r=n%2;

    if(r==0){
        while(n!=0){
            n=n/2;
            op=op+1;
            printf("%d\n",n);
        }
    }
    else{
        n=n*3+1;
        op=1;
        printf("%d\n",n);
    }
    printf("%d\n",op);
    printf("Introduzir um numero: ");
    scanf("%d",&n);
    op=0;
    }
}
