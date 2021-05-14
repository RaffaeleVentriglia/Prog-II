#include <stdlib.h>
#include <stdio.h>
#define Queue_max_size 100

void stampa(int [], int);
void enqueue(int [], int, int);
void dequeue(int [], int, int);

int main(){
    int n, i;
    int queue[Queue_max_size];
    printf("Quanti elementi si vogliono inserire: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Inserire elemento: ");
        scanf("%d", &queue[i]);
    }
    stampa(queue, n);
    return 0;
}

void stampa(int queue[], int len){
    int i;
    printf("Elementi presenti\n");
    for(i = 0; i < len; i++){
        printf("%d\t", queue[i]);
    }
    printf("\n");
}