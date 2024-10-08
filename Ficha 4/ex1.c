#include<stdio.h>

void main()
{
    int n,i,j;
    i=0;
    j=0;
    printf("Introduzir n:");
    scanf("%d",&n);
    do
    {
        j=n*i;
        i=i+1;
        printf("%d ",j);
        if(i%5==0){
         printf("\n");
        }

    }
    while(i<25);
}
