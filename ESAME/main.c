#include <stdio.h>
#include <stdlib.h>

int main(){

    int *pa;

    pa = malloc(sizeof(int));

    if(pa == NULL)
        exit(1);
    else
        printf("Allocazione avvenuta con successo\n");
    free(pa);

    pa = (int *)calloc(5, sizeof(int));

    if(pa == NULL)
        exit(1);
    else
        printf("Allocazione avvenuta con successo\n");
    
    pa = (int *)realloc(pa, sizeof(int));

    if(pa == NULL)
        exit(1);
    else
        printf("Allocazione avvenuta con successo\n");


    int i, j;
    printf("Inserire i: ");
    scanf("%d", &i);
    printf("Inserire j: ");
    scanf("%d", &j);

    int *p = malloc(sizeof(int));
    // accesso all'array per righe
    for(int n = 0; n < i; n++) {
        for(int m = 0; m < j; m++) {
            scanf("%d", & *(p + i * n + j));
        }
    }

    // accesso all'array per colonne
    for(int n = 0; n < i; n++) {
        for(int m = 0; m < j; m++) {
            scanf("%d", & *(p + j * m + i));
        }
    }

    return 0;
}