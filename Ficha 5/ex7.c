#include<stdio.h>

int numeros( int n)
{
    int e,a,b;
    e=0;

    for (a=n;n>=1; n--,e++)
	{
		for (b=0;b<e;b++)
        {
            printf(" ");
        }

		for (b=1;b<=n;b++)
        {
            printf("%d",b);
        }

		for (b=n-1;b>=1;b--)
        {
           printf("%d",b);
        }
        printf("\n");
	}
}

void main()
{
    int n;

    fflush(stdin);
    do{
        printf("Introduzir um numero de linhas: ");
        scanf("%d",&n);
    }
    while (n<1 || n>9);
    numeros(n);
}
