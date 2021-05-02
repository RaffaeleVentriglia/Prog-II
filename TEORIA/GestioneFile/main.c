#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *fp = fopen("prova.txt", "r");
    int x;
    if(fp == NULL){
        printf("Errore nell'apertura del file\n");
        exit(1);
    } else {
        printf("File aperto correttamente\n");
    }
    fscanf(fp, "%d", &x);
    printf("%d\n", x);
    fclose(fp);
    return 0;
}