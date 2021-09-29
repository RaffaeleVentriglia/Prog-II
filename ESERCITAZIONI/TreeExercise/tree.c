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

/* void printTree(tree *root){
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
} */

void printTabs(int numTabs){
    for(int i = 0; i < numTabs; i++){
        printf("\t");
    }
}

void printTree_rec(tree *root, int level){
    if(root == NULL){
        printTabs(level);
        printf("---vuoto---\n");
        return;
    }
    printTabs(level);
    printf("value: %d\n", root -> value);
    for(int i = 0; i < N; i++){
        printTabs(level);
        printf("child %d \n", i);
        printTree_rec(root -> child[i], level+1);
        printTabs(level);
        printf("done\n");
    }
}

void printTree(tree* root){
    printTree_rec(root, 0);
}

int main(){
    tree *n1 = createTree(5);
    tree *n2 = createTree(10);
    tree *n3 = createTree(15);
    tree *n4 = createTree(20);
    tree *n5 = createTree(25);
    tree *n6 = createTree(30);
    tree *n7 = createTree(35);
    tree *n8 = createTree(40);

    n1 -> child[0] = n2;
    n1 -> child[1] = n3;
    n1 -> child[2] = n4;

    n5 -> child[0] = n6;
    n5 -> child[1] = n7;
    n5 -> child[2] = n8;

    printTree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
    free(n6);
    free(n7);
    free(n8);
    
    return 0;
}