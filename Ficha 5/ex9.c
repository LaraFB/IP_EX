#include<stdio.h>

int Media( float a, float b)
{
    int mediai;
    float media;
    media=(a+b)/2;
    mediai=(int)media;
    media=media-mediai;
    if (media>=0.5)
        {
            media=mediai+1;
        }
    return mediai;
}

void main()
{
    int media;
    float x,y;

    printf("Introduzir um numero: ");
    scanf("%f",&x);
    printf("Introduzir um numero: ");
    scanf("%f",&y);
    media=Media(x,y);
    printf("Media inteira: %d\n", media);
}
