#include <iostream>
using namespace std;

template <typename x> void swapvar(x &a, x &b){
    x tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int i = 1, j = 5;
    swapvar<int> (i, j);
    cout << "Valore delle variabili scambiate" << endl;
    cout << "i: " << i << "\tj: " << j << endl;
    return 0;
}