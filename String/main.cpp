#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]){
    string nome, frase;

    cout << "nome cognome: ";
    getline(cin, nome);
    cout << nome << endl;
    cout << "Inserire una frase: ";
    getline(cin, frase);
    cout << frase << endl;
    return 0;
}