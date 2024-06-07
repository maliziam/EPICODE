#include <stdio.h>

void print_menu () {
    printf("Star Wars Quiz Menu:\n");
    printf("A >> Iniziare una nuova partita\nB >> Uscire dal gioco\n");
    printf("Inserisci la lettera corrispondente alla tua scelta: ");
}

int gioca_partita() {
    int punteggio = 0;
    char nome[20] = {'\0'};
    char risposta1, risposta2;

    printf("Inserisci il tuo nome, giovane Padawan:\n");
    scanf("%s", nome);

    printf("Domanda numero 1:\n");
    printf("Chi è il padre di Luke Skywalker?\n");
    printf("A >>> Obi-Wan Kenobi\nB >>> Darth Vader\nC >>> Yoda\n");
    printf("Inserire la risposta:\n");
    scanf(" %c", &risposta1);

    // La risposta corretta è 'B' (Darth Vader)
    if (risposta1 == 'B') {
        punteggio++;
    }

    printf("Domanda numero 2:\n");
    printf("Qual è il colore della spada di Luke?\n");
    printf("A >>> Blu\nB >>> Verde\nC >>> Rosso\n");
    printf("Inserire la risposta:\n");
    scanf(" %c", &risposta2);

    // La risposta corretta è 'A' (Blu)
    if (risposta2 == 'A') {
        punteggio++;
    }

    printf("Partita conclusa, punteggio totalizzato da %s: %d\n", nome, punteggio);

    return 0;
}

int main() {
    char scelta;
    print_menu();
    scanf(" %c", &scelta);
    
    switch(scelta) {
        case 'A':
            gioca_partita();
            break;
        case 'B':
            printf("Che la Forza sia con te! Uscita dal gioco.\n");
            break;
        default:
            printf("Scelta non valida. Prova ancora.\n");
            break;
    }

    return 0;
}