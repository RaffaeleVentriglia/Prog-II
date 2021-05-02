#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
    int* pt = new int;  //allocazione dinamica di una variabile
    float* arr = new float[4];  //allocazione dinamica di un array

    if(pt == nullptr) exit(1);  //controllo riuscita allocazione
    if(arr == nullptr) exit(1);  //controllo riuscita allocazione

    *pt = 5;
    cout << *pt << endl;

    srand((unsigned) time(NULL));
    for(int i = 0; i < 4; i++){
        arr[i] = rand() % 100;
    }

    for(int i = 0; i < 4; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;

    delete pt;  //deallocazione dinamica
    delete [] arr;  //deallocazione dinamica

    cout << *pt << endl;
    for(int i = 0; i < 4; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
    return 0;
}