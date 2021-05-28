// FILE DEDICATO ALLA SOLA COSTRUZIONE E VISITA CON I TRE METODI DI UN ALBERO BINARIO

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {  // struttura per la rappresentazione di un nodo
    int data;     // informazione contenuta nel nodo corrente
    struct nodo *sx;     // puntatore al figlio sinistro
    struct nodo *dx;     // puntatore al figlio destro
} nodo;

typedef nodo* tree;  // in questo modo avremo la variabile tree puntatore a variabile di tipo nodo

tree costruisci_albero(int data, tree sx, tree dx){
    tree radice = (nodo *)malloc(sizeof(nodo));  // allochiamo spazio in memoria per la costruzione della radice
    radice -> data = data;  // assegniamo data passato come parametro al data puntato da radice
    radice -> sx = sx;      // assegniamo sx passato come parametro a sx puntato da radice
    radice -> dx = dx;      // assegniamo dx passato come parametro a dx puntato da radice
    return (radice);
}

tree albero_vuoto(){
    return (NULL);
}

int main(){

    // costruzione di un albero con radice 5, sx: 7 e dx: 3
    tree t1, t2, t3;
    t2 = costruisci_albero(7, albero_vuoto(), albero_vuoto());
    t3 = costruisci_albero(3, albero_vuoto(), albero_vuoto());
    t1 = costruisci_albero(5, t2, t3);
    return 0;
}