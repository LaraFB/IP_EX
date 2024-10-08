#include<stdio.h>

float res (float n)
{
	float	r;

	r = n*n;
	return r;
}
void main()
{
	float	n;

	do
	{
		printf("\nIntroduza um numero: \n");
		scanf("%f",&n);
		if (n!=0){
			printf("\n%0.1f   %0.1f\n",n,res(n));
		}
	}
	while (n!=0);
}

