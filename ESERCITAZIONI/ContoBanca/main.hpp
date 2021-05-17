#include <iostream>
#include <string>
using namespace std;

class ContoBanca {
    string nomeCliente;
    string numeroConto;
    string tipoConto;
    float saldoTotale = 0;
    public:
        void setDati(string,string,string);
        void deposito(float);
        void prelievo(float);
        void mostraDati();
};

void ContoBanca::setDati(string nome, string numero, string tipo){
    this -> nomeCliente = nome;
    this -> numeroConto = numero;
    this -> tipoConto = tipo;
}

void ContoBanca::deposito(float importo){
    this -> saldoTotale += importo;
}

void ContoBanca::prelievo(float importo){
    this -> saldoTotale -= importo;
}

void ContoBanca::mostraDati(){
    cout << "Nome cliente: " << this -> nomeCliente << endl;
    cout << "Numero conto: " << this -> numeroConto << endl;
    cout << "Tipo conto: " << this -> tipoConto << endl;
    cout << "Saldo totale: €" << this -> saldoTotale << endl; 
}
