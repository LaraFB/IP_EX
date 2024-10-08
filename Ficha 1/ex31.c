#include<stdio.h>

void main()
{
    int n,d,r,di;

    d=1;
    di=1;
    printf("Numero: ");
    scanf("%d",&n);
    while (n>=d) {
        r=n%d;
        if(r==0){
            di=d;
            printf("%d\n",di);
            d=d+1;
    }
    else
        d=d+1;
    }
}
