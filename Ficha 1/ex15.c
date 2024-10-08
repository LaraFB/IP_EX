#include<stdio.h>

void main()
{
int nl,l,p,a;

printf("Numero de lados de 3 a 5: ");
scanf("%d",&nl);
printf("Lado: ");
scanf("%d",&l);

 if(nl==3){
     p=3*l;
     printf("Triangulo! \nPerimetro: %d",p);
          }
          else
            if(nl==4){
                a=l*l;
          printf("Quadrado! \nArea: %d",a);
          }
          else
                printf("Pentagono!");
}
