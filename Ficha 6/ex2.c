#include<stdio.h>
#define N	5

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
	for (i=0;i<N;i++)
	{
		if (a[i]<media)
        {
            a[i]=0;
        }
		printf("%d, ",a[i]);
	}

}
