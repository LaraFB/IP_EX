#include <stdio.h>

void main(void)
{
    int i,j;
    float x,y;

    scanf("%f%d%f%d", &x, &i, &y, &j);
    printf("%d\n%f\n%f\n%d",x,i,y,j);
    fflush(stdin);
    scanf("%d%d%f%f", &i, &j, &x, &y);
    printf("%d\n%f\n%f\n%d",i,j,x,y);
}
