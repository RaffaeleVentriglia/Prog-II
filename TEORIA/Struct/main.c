#include <stdio.h>
#include <stdlib.h>
#define CLASS_SIZE 10

// il meccanismo delle strutture permette di aggregare
// variabili non omogenee, ovvero di tipi differenti

// di seguito vari esempi di struct

struct card {
    int valore;
    char seme;
} c1, c2;

struct date {
    int day, month, year;
    char day_name[4];
    char month_name[4];
} yesterday, today, tomorrow;

struct student {
    char *name;
    int ID;
    char grade;
};
typedef struct student student;

int fail(student class[]){
    int i, cnt = 0;

    for(i = 0; i < CLASS_SIZE; i++)
        cnt += class[i].grade == 'F';

    return cnt;
}

// best practice utilizzare il meccanismo typedef quando si tratta tipi strutturati

typedef struct card card;
card example;

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

    student class[CLASS_SIZE];
    class[0].grade = 'F';
    class[4].grade = 'F';
    class[6].grade = 'F';
    printf("Studenti bocciati: %d\n", fail(class));
    return 0;
}