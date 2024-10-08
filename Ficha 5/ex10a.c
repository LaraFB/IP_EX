#include<stdio.h>

int cubo( int n)
{
    int c;
    c=n*n*n;

return c;
}

void main()
{
    int n;

    printf("Introduzir um numero: ");
    scanf("%d",&n);
    if (n>0)
        {
         printf("Cubo: %d ",cubo(n));
        }
}

