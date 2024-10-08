#include<stdio.h>
void main()
{
    int n;
    printf("n:");
    scanf("%d",&n);
    for (n=n;n==9||n>9;n=n-9){
        n=n-9;
        printf("\n %d",n);
    }

}
