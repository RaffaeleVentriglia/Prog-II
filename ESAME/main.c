#include <stdio.h>
#include <stdlib.h>

int main(){

    int *pa;

    pa = malloc(sizeof(int));
    if(pa == NULL)
        exit(1);
    else
        printf("Allocazione avvenuta con successo\n");

    int i, j;
    printf("Inserire i: ");
    scanf("%d", &i);
    printf("Inserire j: ");
    scanf("%d", &j);

    for(int n = 0; n < i; n++) {
        for(int m = 0; m < j; m++) {
            scanf("%d", & *(pa + i * n + j));
        }
    }

    return 0;
}