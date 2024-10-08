#include<stdio.h>

void main()
{
   int s,m,h;

   printf("Segundos: ");
   scanf("%d",&s);
   h= (int)s/3600;
   s= s-(h*3600);
   m= (int) s/60;
   s= s-(m*60);
   printf("Horas: %d Minutos: %d Segundos: %d",h,m,s);
}
