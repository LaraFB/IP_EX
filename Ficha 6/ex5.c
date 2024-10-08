#include <stdio.h>

void main()
{
	int	n,t=0,i=0,j,capicua;
	int a[N];
	do
	{
		printf("Introduza numero: ");
		scanf("%d",&n);
	}while (n<=0);
	while (n>0)
	{
		a[t++]=n%10;
		n/=10;
	}
	capicua=1;
	j=t-1;
	do
	{
		if (a[i]!=a[j])
		{
			capicua=0;
			i=t;
		}
		i++;
		j--;
	}while (i<=(t-1)/2);
	if (capicua)
		printf("Capicua.\n");
    else
        printf("Nao e capicua.\n");
}

