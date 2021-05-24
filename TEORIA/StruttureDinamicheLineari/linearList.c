#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int eta;
} INFO_FIELD;

struct persona {
    INFO_FIELD info;
    struct persona *next;
};
struct persona *crea_lista();
void visualizza(struct persona *);


// esempio statico
struct P {
    char nome[20];
    struct P *next;
} el1, el2, el3;


struct Prenotazioni {
    char nome[20];
    int aa, mm, gg;
};
struct Prenotazioni utente[50];
struct Prenotazioni *p_p = &utente[0];
//p_p = &utente;


int main(){

    //esempio dinamico
    struct personaDinamica {
    char nome[20];
    struct personaDinamica *next;
    } *head, *punt;

    head = (struct personaDinamica*)calloc(1,sizeof(struct personaDinamica));
    strcpy(head -> nome, "Raffaele");

    head -> next = (struct personaDinamica*)calloc(1,sizeof(struct personaDinamica));
    strcpy((head -> next) -> nome, "Filippo");

    (head -> next) -> next = (struct personaDinamica*)calloc(1,sizeof(struct personaDinamica));
    strcpy(((head -> next) -> next) -> nome, "Davide");

    punt = head;
    while(punt != NULL){
        printf("Nome: %s, Next: %d\n", punt -> nome, punt -> next);
        punt = punt -> next;
    }



    struct persona *lista;
    lista = crea_lista();
    visualizza(lista);



    //char *name[] = {"Raffaele", "Filippo", "Davide"};
    //int age[] = {20, 15, 7};


    //void ins_testa(INFO_FIELD, struct persona **);
    //void ins_nodo(INFO_FIELD, struct persona **);



    //collegamenti della lista statica
    el1.next = &el2;
    el2.next = &el3;
    el3.next = NULL;

    return 0;
}






struct persona *crea_lista(){
    struct persona *head, *punt;
    int i, n;

    printf("Numero di persone da inserire: ");
    scanf("%d", &n);

    if(n == 0){
        head = NULL;
    } else {
        head = (struct persona *)malloc(sizeof(struct persona));
        printf("Inserire il primo elemento: ");
        scanf("%d", &head -> info.eta);
        punt = head;
        for(i = 1; i < n; i++){
            punt -> next = (struct persona *)malloc(sizeof(struct persona));
            punt = punt -> next;
            printf("Inserire il %d elemento: ", i);
            scanf("%d", &punt -> info.eta);
        }
        punt -> next = NULL;
    }
    return(head);
}

void visualizza(struct persona *p){
    printf("Lista -> ");
    while(p != NULL){
        printf("%d", p -> info.eta);
        printf(" -> ");
        p = p -> next;
    }
    printf("NULL\n");
}