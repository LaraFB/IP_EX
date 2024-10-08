#include<stdio.h>

int divisores( int n)
{
    int i,divisor;
    divisor=0;
    i=1;

    while (i<=n)
    {
        if((n%i)==0)
        {
            divisor=divisor+1;

        }
        i=i+1;
    }

    return divisor;
}

void main()
{
    int n,divisor;

    do{
            printf("Introduzir um numero: ");
            scanf("%d",&n);
            if (n>0)
            {
                divisor=divisores(n);
                if(divisor==2)
                {
                    printf("O numero e primo!\n");
                }
                else
                    printf("Numero de divisores: %d\n",divisor);
            }


    }
    while(n!=0);

}

