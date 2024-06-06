#include <stdio.h>

int main (){

    int numeratore;
    int denominatore;
    float divisione;

    printf("inserisci numeratore");
    scanf("%d", &numeratore);

    printf("\n inserisci denominatore");
    scanf("%d", &denominatore);
    if( denominatore > numeratore ); printf("\nueue bukki nz pofaaaa");
    if( denominatore !=0) {
        divisione = numeratore / denominatore;
        printf("\n il risultato e': %f", divisione);       
    } else {
        printf("\nnin posso dividere per zero\n");
    }


    return 0;
}

int numero_a, numero_b;
    float(media);
    printf("digita un numero\n");
    scanf("%d", &numero_a);

    printf("digita un altro numero\n");
    scanf("%d", &numero_b);

    media = (numero_a + numero_b) / 2;

    printf("La media è %.2f\n", media);

    break;