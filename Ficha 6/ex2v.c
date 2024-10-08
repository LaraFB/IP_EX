#include<stdio.h>
#define N	5

int  zero(int b[], it tam, float med)
{
    int i, cont=0;
    for (i=0;i<tam;i++)
    {
        if(b[i]<med)
        {

            b[i]=0;
            cont++;
        }
    }
    return cont;
}
void main()
{
    int	i,soma;
    int a[N];
	float	media;
    soma=0;

	for (i=0;i<N;i++)
	{
		printf("Numero: ",i);
		scanf("%d",&a[i]);
		soma+=a[i];
	}
	media=(float)soma/N;
	printf("Media = %.2f\n",media);
	c=zero(a,N,media);
	for (i=0;i<N;i++)
    {

    }

}

