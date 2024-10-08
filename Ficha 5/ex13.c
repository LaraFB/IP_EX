#include <stdio.h>
#include <time.h>

#define	MAX 500

int NumeroAleatorioInt(int limite)
{
	srand((unsigned)time(NULL));
	return (rand()%limite);
}

int pedeAposta(int jogador)
{
	int	ap;

	fflush(stdin);
	printf("\nQual a aposta do jogador %d: ",jogador);
	scanf("%d",&ap);
	return ap;
}
int compara(int a,int b)
{
	int	r;

	if (a<b)
		r=-1;
	else
		if (a==b)
			r=0;
		else
			r=1;
	return r;
}

void main()
{
	int	j=1,resultado,alvo,aposta;

	alvo=NumeroAleatorioInt(MAX);
	do
	{
		aposta=pedeAposta(j);
		resultado=compara(aposta,alvo);
		switch (resultado)
		{
			case -1:
printf("O numero %d esta abaixo do numero certo\n",num);
				break;
			case 0:
				printf("O jogador %d acertou\n",j);
				break;
			case 1:
printf("O numero %d esta acima do numero certo\n",num);
				break;
		}
		if (j==1)
			j=2;
		else
			j=1;
	}while (resultado!=0);
}

