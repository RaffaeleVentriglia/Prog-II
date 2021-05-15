#include <stdio.h>
#include <stdlib.h>

// il meccanismo delle strutture permette di aggregare
// variabili non omogenee, ovvero di tipi differenti

struct card {
    int valore;
    char seme;
} c1, c2;

// best practice utilizzare il meccanismo typedef quando si tratta tipi strutturati

typedef struct card card;

// utilizzando typedef per dare un nome ai tipi derivati e scrivendo 
// queste definizioni nei file d'intestazione, il programmatore
// ottiene un alto grado di portabilità e modularità

typedef struct {
    char nome[20];
    int eta;
} persona;


int main(){

    card c1;
    persona a1;
    return 0;
}