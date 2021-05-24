#include <stdio.h>
#include <stdlib.h>
#define N 3

typedef struct tree {
    int value;
    struct tree *child[N];
} tree;

tree *createTree(int value) {
    tree* result = malloc(sizeof(tree));
    if(result != NULL){
        result -> value = value;
        for(int i = 0; i < N; i++){
            result -> child[i] = NULL;
        }
    }
    return result;
}

void printTree(tree *root){
    if(root == NULL){
        printf("---vuoto---\n");
        return;
    }
    printf("value: %d\n", root -> value);
    for(int i = 0; i < N; i++){
        printf("child %d \n", i);
        printTree(root -> child[i]);
        printf("done\n");
    }
}

int main(){
    tree *n1 = createTree(5);
    tree *n2 = createTree(10);
    tree *n3 = createTree(15);
    tree *n4 = createTree(20);
    tree *n5 = createTree(25);

    n1 -> child[0] = n2;
    n1 -> child[1] = n3;
    n3 -> child[0] = n4;
    n3 -> child[1] = n5;

    printTree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    return 0;
}