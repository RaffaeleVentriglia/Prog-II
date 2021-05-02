//allocazione dinamica in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char *var1, *var2;
    int byte = 5;
    var1 = (char *)calloc(byte, sizeof(char));
    var2 = (char *)malloc(byte);
    if(var1 != NULL) {
        puts("Contenuto dei byte allocati con calloc");
        for(int i = 0; i < byte; i++)
            printf("%hd\n", *(var1 + i));
    } else 
        exit(0);
    if(var2 != NULL) {
        puts("Contenuto dei byte allocati con malloc");
        for(int i = 0; i < byte; i++)
            printf("%d\n", *(var2 + i));
    } else 
        exit(0); 
    free(var1);
    free(var2);


    printf("\n");


    //ACCESSO PER RIGHE E PER COLONNE ARRAY
    int size = 5;
    int *pc;
    int *pr;
    pc = (int*)malloc(size*sizeof(int*));
    pr = (int*)malloc(size*sizeof(int*));
    for(int i = 0; i < size; i++){
        pc[i] = (int)malloc(size*sizeof(int));
    }
    for(int i = 0; i < size; i++){
        pr[i] = (int)malloc(size*sizeof(int));
    }
    //accesso per colonne
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            *(pc + i*size + j) = i + 1;
        }
    }
    //accesso per righe
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            *(pr + j*size + i) = i + 1;
        }
    }
    puts("Stampa dati per righe");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d\t", *(pr + j*size + i));
        }
        printf("\n");
    }
    printf("\n");
    puts("Stampa dati per colonne");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d\t", *(pr + i*size + j));
        }
        printf("\n");
    }
    free(pc);
    free(pr);
    return 0;
}