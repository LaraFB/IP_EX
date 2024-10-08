#include<stdio.h>

void main()
{
    char operador;
    float num1,num2,r;

    do{
    printf("numero: ");
    scanf("%f",&num1);
    printf("numero: ");
    scanf("%f",&num2);
    fflush(stdin);
    printf("Operador: ");
    scanf("%c",&operador);
    switch (operador){
        case '+':
            r=num1+num2;
        break;
        case '-':
            r=num1-num2;
        break;
        case '*':
            r=num1*num2;
        break;
        case '/':
            r=num1/num2;
        break;
        default:
            printf("Erro\n");
    }
    printf("%0.3f\n",r);
    }
    while(num1!=0 && num2!=0);
}
