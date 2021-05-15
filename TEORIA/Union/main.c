#include <stdio.h>
#include <stdlib.h>


// La union è un tipo derivato come la struct, ma i suoi membri condividono la memoria.
// Può essere utilizzata per applicazioni che richiedono interpretazioni multiple 
// per una data parte della memoria; in particolare vengono impiegate le union per
// risparmiare memoria, permettendo l'utilizzo dello spazio per una varietà di tipi.

typedef union int_or_float {
    int i;
    float f;
} number;

struct flower {
    char *name;
    enum {red, white, blue} color;
};

struct fruit {
    char *name;
    int calories;
};

struct vegetable {
    char *name;
    int calories;
};

typedef union flower_fruit_vegetable {
    struct flower flw;
    struct fruit frt;
    struct vegetable veg;
} ffv;

int main(){
    number n;
    ffv example;

    n.i = 4444;
    printf("i: %10d \t f: %16.10e\n", n.i, n.f);

    n.f = 4444.0;
    printf("i: %10d \t f: %16.10e\n", n.i, n.f);

    return 0;
}