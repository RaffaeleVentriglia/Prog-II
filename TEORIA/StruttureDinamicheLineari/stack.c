#include <stdio.h>
#define Max_Stack_Size 100

void inverte_array(int [], int);
void push(int, int [], int *);
void pop(int *, int [], int *);

int main(){
    int n, i;
    int stack[Max_Stack_Size];
    printf("Quanti elementi si vogliono inserire: ");
    scanf("%d", &n);
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

void push(int elem, int stack[], int *head){
    *(stack + ++*head) = elem;
}

void pop(int *elem, int stack[], int *head){
    *elem = *(stack + (*head)--);
}

void inverte_array(int stack[], int len){
    int temp[Max_Stack_Size];
    int i, head;
    head = -1;     //indica stack vuoto
    for(i = 0; i - len; i ++)
        push(stack[i], temp, &head);
    for(i = 0; i < len; i++)
        pop(stack + i, temp, &head);
}