#include <stdio.h>

void triangulo(int n)
{
	int i,j,nEsp=0;

	for (i=n;n>=1; n--,nEsp++)
	{
		for (j=0;j<nEsp;j++)
			printf(" ");
		for (j=1;j<=n;j++)
			printf("%d",j);
		for (j=n-1;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}
}

void main()
{
	int	n;

	do
	{
		fflush(stdin);
		printf("\nQual o numero de linhas (2 a 9): ");
		scanf("%d",&n);
	}while (n<=1 || n>9);
	triangulo(n);
}
