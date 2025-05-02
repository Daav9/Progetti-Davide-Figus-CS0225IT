#include <stdio.h>
int main() {
    int a,b,prodotto;
    
    printf("Inserisci il primo numero: ");
    scanf("%d",&a);
    
    printf("Inserisci il secondo numero: ");
    scanf("%d",&b);
    prodotto = a * b;
   
    printf("Il prodotto di %d e %d è: %d\n",a,b,prodotto);
    return 0;

}
