#include <stdio.h>
#include <stdlib.h>

void inverte_array(int[], int len);
void push(int, int *, int *);
void pop(int *, int *, int *);

int main(){
    int n, i;
    printf("Quanti elementi si vogliono inserire: ");
    scanf("%d", &n);
    int stack[n];
    for(i = 0; i < n; i++){
        printf("Inserire elemento: ");
        scanf("%d", &stack[i]);
    }
    printf("Array prima\n");
    for(i = 0; i < n; i++){
        printf("%d\t", stack[i]);
    }
    printf("\n");
    inverte_array(stack, n);
    printf("Array dopo\n");
    for(i = 0; i < n; i++){
        printf("%d\t", stack[i]);
    }
    printf("\n");
    return 0;
}

void push(int elem, int *stack, int *head){
    *(stack + ++*head) = elem;
}

void pop(int *elem, int *stack, int *head){
    *elem = *(stack + (*head)--);
}

void inverte_array(int stack[], int len){
    int *temp;
    int i, head = -1;
    temp = calloc(len, sizeof stack[1]);
    for(i = 0; i < len; i++)
        push(stack[i], temp, &head);
    for(i = 0; i < len; i++)
        pop(stack + i, temp, &head);
    free(temp);
}