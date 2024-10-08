#include<stdio.h>

void main()
{
int a,b,c,d;
float x,y;
printf("a: ");
scanf("%d",&a);
printf("b: ");
scanf("%d",&b);
printf("c: ");
scanf("%d",&c);
if (a!=0){
    d=b*b-4*a*c;

   if (d>=0){
       x=(-b-sqrt(b*b-4*a*c))/(2*a);
       y=(-b+sqrt(b*b-4*a*c))/(2*a);
       printf("%0.1f\n%0.1f",x,y);
    }
    else
    printf("Nao ha raizes reais!");
}
else
    printf("Impossivel!");
}
