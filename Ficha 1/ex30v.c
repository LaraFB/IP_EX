#include<stdio.h>

void main()
{
    int a,b,n;
    const float TCA=0.052,TCB=0.018;
    a=500;
    b=1500;
    for(n=0;a<=b;n++)
    {
        a=a+a*TCA;
        b=b+b*TCB;
    }
    printf("Demora %d ", n);
}
