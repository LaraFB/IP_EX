
int fatorial(int num)
{
	int i,j;
	i=1;
	for (j=1;j<=num;j++)
		i=j*i;

	return i;
}
void main()
{
	int np,n,p,r,nn,pp;

	do{
            printf("n:\n");
            scanf("%d",&n);
            printf("p:\n");
            scanf("%d",&p);
	}
    while(n<=p||p<0);

    nn=fatorial(n);
    pp=fatorial(p);
    np=fatorial(n-p);
    r=nn/(pp*np);
	printf("%d",r);
}
