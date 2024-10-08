#include<stdio.h>

int linha (int n)
{
    n=n-1;
return n;
}
void main()
{
    int n;

    printf("Introduzir numero: ");
    scanf("%d",&n);

    while(n>0)
    {
        printf("*");
        n=linha(n);
    }

}
