#include<stdio.h>

void main()
{
    int n,nn,nnn;

    printf("Introduzir o primeiro numero: ");
    scanf("%d",&n);
    printf("Introduzir o segundo numero: ");
    scanf("%d",&nn);
    printf("Introduzir o terceiro numero: ");
    scanf("%d",&nnn);
    if(n>nn){
            if(n>nnn){
                    printf("%d", n);
            }
            else
             printf("%d",nnn);
   }
   else
    if(nn>nnn)
         printf("%d",nn);
}
