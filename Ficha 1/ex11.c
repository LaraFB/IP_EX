#include<stdio.h>

void main()
{
    const double D=0.13;
    double np,npb;

    np=8*1300*6;
    npb=np-(np*D);
    printf("%0.0lf",npb);
}
