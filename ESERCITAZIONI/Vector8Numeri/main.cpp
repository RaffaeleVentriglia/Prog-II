// somma di 8 elementi inseriti dall'utente all'interno di un vector
// utilizzando le funzioni principali della classe vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr;
    int num;
    float somma = 0;
    double media = 0.0;
    cout << "È possibile inserire solo 8 elementi" << endl;
    for(int i = 0; i < 8; i++){
        cout << "Inserire numero: ";
        cin >> num;
        arr.push_back(num);
        somma += num;
    }

    media = somma / arr.size();
    cout << "Somma dei numeri: " << somma << endl;
    cout << "Media: " << media << endl;
    return 0;
}