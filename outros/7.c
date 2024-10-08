#include<stdio.h>
void main()
{
    int n,r, d;
    printf("n: ");
    scanf("%d",&n);
    do{
    r=n%10;
    n=n-(r*10);
    printf ("%d",n);
    if (n==1||n==3||n==5||n==7||n==9){
        d=d+1;
    }
    n=r;
    }
    while(n!=0);
    printf ("%d",d);
}
