#include <stdio.h>
#include <stdlib.h>

typedef char DATA;

struct node {
    DATA d;
    struct node *left;
    struct node *right;
};

typedef struct node NODE;
typedef NODE *BTREE;

// COSTRUZIONE DI UN ALBERO BINARIO
BTREE new_node(void){
    return (malloc(sizeof(NODE)));
}

BTREE init_node(DATA d1, BTREE p1, BTREE p2){
    BTREE t;
    t = new_node();
    t -> d = d1;
    t -> left = p1;
    t -> right = p2;
    return t;
}

// CREAZIONE DI UN ALBERO BINARIO DA UN ARRAY
BTREE create_tree(DATA a[], int i, int size){
    if(i >= size){
        return NULL;
    } else {
        return (init_node(a[i], create_tree(a, 2*i+1, size), create_tree(a, 2*i+2, size)));
    }
}

// visita di un albero binario in ordine simmetrico
void inorder(BTREE root){
    if(root != NULL){
        inorder(root -> left);
        printf("%c --> ", root -> d);
        inorder(root -> right);
    }
}

// visita di un albero binario in ordine posticipato
void postorder(BTREE root){
    if(root != NULL){
        postorder(root -> left);
        postorder(root -> right);
        printf("%c -> ", root -> d);
    }
}

//visita di un albero binario in ordine anticipato
void preorder(BTREE root){
    if(root != NULL){
        printf("%c -> ", root -> d);
        preorder(root -> left);
        preorder(root -> right);
    }
}

int main(){
    char a[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'L'};
    inorder(create_tree(a, 3, 10));
    printf("\n");
    postorder(create_tree(a, 3, 10));
    printf("\n");
    preorder(create_tree(a, 3, 10));
    printf("\n\n");


    inorder(create_tree(a, 8, 10));
    printf("\n");
    postorder(create_tree(a, 8, 10));
    printf("\n");
    preorder(create_tree(a, 8, 10));
    printf("\n\n");


    inorder(create_tree(a, 2, 10));
    printf("\n");
    postorder(create_tree(a, 2, 10));
    printf("\n");
    preorder(create_tree(a, 2, 10));
    printf("\n\n");


    inorder(create_tree(a, 0, 10));
    printf("\n");
    postorder(create_tree(a, 0, 10));
    printf("\n");
    preorder(create_tree(a, 0, 10));
    printf("\n\n");


    return 0;
}