#include<stdio.h>

void linha (int n)
{
    if (n>0)
    {
        do
        {
            printf("*");
            n=n-1;
        }
        while (n>0);
    }
 return;
}
void main()
{
    int n;

    printf("Introduzir numero: ");
    scanf("%d",&n);
    linha(n);
}
