#include<stdio.h>

void main()
{
    int a,b,n;
    const float TCA=0.052;
    const float TCB=0.018;
    a=500;
    b=1500;
    n=0;

    while(a<=b){
        a=a+a*TCA;
        b=b+b*TCB;
        n=n+1;
    }
    printf("Demora %d ", n);
}
