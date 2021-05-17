#include "main.hpp"

int main(){
    int scelta;
    string *tmp = new string[3];  // allocazione dinamica di un array di stringhe
    ContoBanca cnt;

    cout << "Inserire nome e cognome: ";
    getline(cin, tmp[0]);  
    cout << "Inserire il numero del conto: ";
    getline(cin, tmp[1]);
    cout << "Inserire il tipo di conto: ";
    getline(cin, tmp[2]);

    cout << endl;

    cnt.setDati(tmp[0], tmp[1], tmp[2]);

    cnt.mostraDati();

    /*
        INSERIRE LE RESTANTI FUNZIONI PER PRELEVARE E DEPOSITARE DENARO
    */

    delete [] tmp;  // deallocazione della memoria dedicata all'array di stringhe

    return 0;
}