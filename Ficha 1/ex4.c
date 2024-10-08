#include<stdio.h>
void main()
{
const float PT1=0.1;
const float PT2=0.1;
const float PE=0.8;
float t1, t2,e;
int n;

printf("Introduzir a nota do primeiro teste: ");
scanf ("%f",&t1);
printf("Introduzir a nota do segundo teste: ");
scanf ("%f",&t2);
printf("Introduzir a nota do exame: ");
scanf ("%f",&e);
n= t1*PT1+t2*PT2+e*PE;
printf("nota= %d", n);
}
