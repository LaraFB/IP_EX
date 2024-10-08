#include<stdio.h>
void main()
{
    int r;
    const float PI=3.14;
    float a,p;

    printf("Introduza o raio: ");
    scanf ("%d",&r);
    a=r*r*PI;
    p=2*PI*r;
    printf("area= %f\nperimetro= %0.1f", a,p);
}
