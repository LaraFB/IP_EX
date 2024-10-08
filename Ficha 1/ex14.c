#include<stdio.h>

void main()
{
    char t;
    float p;
    const float TBE=0.05;
    const float TL=0.30;
    const float TR=0.20;

    printf("Introduzir preco: ");
    scanf("%f",&p);
    fflush(stdin);
    printf("Introduzir tipo de produto (bem essencial=b;luxo=l): ");
    scanf("%c",&t);
     switch(t){
        case 'b':
            p=p+p*TBE;
        break;
        case 'l':
            p=p+p*TL;
        break;
        default:
            p=p+p*TR;
     }
    printf("Preco com IVA: %0.2f\n",p);
}
