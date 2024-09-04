#include <stdio.h>

int main() {
    int scelta;

    printf("Vuoi sapere la media di due numeri???\n");
    printf("Menu':\n1 si\n2 no voglio sapere quanto fa la moltiplicazione\n3 no voglio un bassotto lunghissimo!\n");
    scanf("%d", &scelta);

    switch (scelta) {
        case 1: {
            int numero_a, numero_b;
            float media;

            printf("digita un numero:\n");
            scanf("%d", &numero_a);

            printf("digita un altro numero:\n");
            scanf("%d", &numero_b);

            media = (numero_a + numero_b) / 2.0;

            printf("La media è %.2f\n", media);
            break;
        }
        case 2: {
            int numero_1, numero_2;

            printf("digita un numero:\n");
            scanf("%d", &numero_1);

            printf("digita un altro numero:\n");
            scanf("%d", &numero_2);

            printf("\nIl risultato della moltiplicazione è: %d\n", numero_1 * numero_2);
            break;
        }
        case 3: {
            printf("\n    (                            .-.");
            printf("\n    (,..........................()  `-");
            printf("\n    (  ........................  /'''`");
            printf("\n    //\\\\                      //\\\\\n\n\n");
            break;
        }
    
        
    }

    return 0;
}
