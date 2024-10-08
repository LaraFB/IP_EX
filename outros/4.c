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
    int n,lado;

    printf("Introduzir lado: ");
    scanf("%d",&n);
    lado=n;
    linha(n);
    do{
            lado=lado-1;
            printf("\n");
            linha(n);
    }
    while(lado>1);

}
