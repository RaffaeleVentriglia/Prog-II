#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // VLA (Variable Length Array) permette di creare degli array
    // con lunghezza variabile durante l'esecuzione del codice.
    int r, c;
    srand((unsigned)time(NULL));
    printf("Inserire numero righe: ");
    scanf("%d", &r);
    printf("Inserire numero colonne: ");
    scanf("%d", &c);
    int VLA[r][c];
    printf("\nAllocazione statica\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            VLA[i][j] = 1+rand()%100;
            printf("%d\t", VLA[i][j]);
        } printf("\n");
    } printf("\n");

    // allocazione dinamica di una matrice per righe
    int pr = r, pc = c;
    int *righe;
    righe = malloc(pr*pc*sizeof(int));
    printf("Allocazione dinamica per righe\n");
    for(int i = 0; i < pr; i++){
        for(int j = 0; j < pc; j++){
            *(righe+i*pc+j) = VLA[i][j];
            printf("%d\t", *(righe+i*pc+j));
        } printf("\n");
    } printf("\n");

    // allocazione dinamica di una matrice per colonne
    int *colonne;
    colonne = malloc(pr*pc*sizeof(int));
    printf("Allocazione dinamica per colonne\n");
    for(int i = 0; i < pr; i++){
        for(int j = 0; j < pc; j++){
            *(colonne+j*pr+i) = VLA[i][j];
            printf("%d\t", *(colonne+j*pr+i));
        } printf("\n");
    } printf("\n");
    return 0;
}