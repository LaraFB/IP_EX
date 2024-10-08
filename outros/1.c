#include <stdio.h>

void main()
{
    int i,j;

    printf("digite: ");
    scanf("%d",&j);
    for (i=0; i<=100;)
    {
      j=j+1;
      printf("%d\n",j);
      i=j;
      i=i+1;
    }

}

