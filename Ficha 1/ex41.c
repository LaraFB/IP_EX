#include<stdio.h>

float IMC(float p,float m)
{
    float imc;

    imc=p/(m*m);

    return imc;
}

void main()
{
    float m,p,imc;

    printf("Introduzir peso: ");
    scanf("%f",&p);
    printf("Introduzir altura (1.z)m: ");
    scanf("%f",&m);

    imc=IMC(p,m);

    if(imc<18,5){
        printf("Abaixo do peso normal!");
    }
    else
    if(imc>=18,5&&imc<=25){
        printf("Peso normal!");
    }
    else
    if(imc>25 && imc<30){
        printf("Acima do peso normal!");
    }
    else{
        printf("Obessidade!");
    }
}
