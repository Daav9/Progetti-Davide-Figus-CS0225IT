#include <stdio.h>
int main () {

    int x,y;

    float media;

    printf("Inserisci il primo numero: ");
    scanf("%d", &x);

    printf("Inserisci il secondo numero: ");
    scanf("%d",&y);

    media = (x + y)/2.0;

    printf("La media aritmetica di %d e %d è: %2.f\n",x,y,media);

    return 0;
    
}

