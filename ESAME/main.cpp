#include <iostream>
#include <vector>

using namespace std;

// utilizzo di namespace
namespace space1 {
    void func() {
        printf("Ciao a tutti\n");
    }
}
// utilizzo di namespace

// funzioni push e pop per l'utilizzo dello stack
void push(int elem, int stack[], int *head) {
    *(stack+ ++*head) = elem;
}

void pop(int *elem, int stack[], int *head) {
    *elem = *(stack+ (*head)--);
}
// funzioni push e pop per l'utilizzo dello stack

int main() {

    // utilizzo di namespace
    space1::func();
    // utilizzo di namespace



    //allocazione dinamica in cpp
    int n = 5;
    int *p = new int(n);
    int *arr = new int[5];
    if(p == nullptr) 
        exit(1);
    else
        cout << "Allocazione avvenuta con successo" << endl;

    if(arr == nullptr) 
        exit(1);
    else
        cout << "Allocazione avvenuta con successo" << endl;

    delete p;
    delete arr;
    // allocazione dinamica in cpp



    // class vector
    vector <int> v = {2,4,6,8}; // array dinamico che cambia durante l'esecuzione
    vector <vector<int>> v2 = { {1,2,3} , {4,5,6} }; // matrice dinamica che cambia durante l'esecuzione
    // class vector




    return 0;
}