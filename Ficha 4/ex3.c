#include<stdio.h>

void main()
{
    char t;
    int na,a,n;
    float p,ps,preco;
    const float TA=0.06;
    const float TNA=0.23;
    ps=0;
    n=0;
    na=0;
    a=0;
    preco=0;
    p=1;

    while(p>0){
            printf("Introduzir preco: ");
            scanf("%f",&p);
            fflush(stdin);
            printf("Introduzir tipo de produto (alimentar=a;nao alimentar=n): ");
            scanf("%c",&t);
            if (p>0){
                ps=ps+p;
                 switch(t){
                     case 'a':
                         p=p+p*TA;
                         a=a+1;
                         break;
                      case 'n':
                         p=p+p*TNA;
                         na=na+1;
                         break;
                          }
     preco=p+preco;
     n=n+1;
            }
    }
    printf("\nNumero de produtos alimentares: %d\nNumero de produtos nao alimentares: %d\nPreco sem IVA: %0.2f\nPreco com IVA: %0.2f",a,na,ps,preco);

}
