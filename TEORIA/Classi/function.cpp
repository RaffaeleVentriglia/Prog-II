#include "main.hpp"

//ESEMPIO STUDENTI
void Studente::inserisci_dati(string N, string M, int v){
    this -> nome = N;
    this -> matricola = M;
    voto = v;
}

void Studente::stampa_dati(){
    cout << "Matricola: " << matricola;
    cout << " Nome studente: " << nome;
    cout << " Voto: " << voto;
    cout << endl;
}

//ESEMPIO VEICOLO - CAMION
void Camion::show() {
    cout << "Camion" << endl;
    cout << "\t Ruote: " << getRuote() << endl;
    cout << "\t Peso: " << getPeso() << endl;
    cout << "\t Passeggeri: " << getPasseggeri() << endl;
}

void Auto::show() {
    cout << "Automobile" << endl;
    switch(getTipo()){
        case utilitaria:
            cout << "\t Tipo: Utilitaria" << endl;
            break;
        case suv:
            cout << "\t Tipo: Suv" << endl;
            break;
        case berlina:
            cout << "\t Tipo: Berlina" << endl;
            break;
        default:
            cout << "\t Tipo: Sconosciuto" << endl;
            break;
    }
    cout << "\t Ruote: " << getRuote() << endl;
    cout << "\t Passeggeri: " << getPasseggeri() << endl;
}

int main(){

    //ESEMPIO STUDENTE
    Studente E[3];
    E[0].inserisci_dati("Raffaele", "0124002249", 30);
    E[1].inserisci_dati("Anna", "0124002248", 29);
    E[2].inserisci_dati("Antonio", "0124002250", 28);
    for(int i = 0; i < 3; i++){
        E[i].stampa_dati();
    }

    //ESEMPIO VEICOLO - CAMION
    Camion c1;
    c1.setPeso(50);
    c1.setRuote(8);
    c1.setPasseggeri(5);
    c1.show();

    cout << endl;
    Auto a1;
    a1.setTipo(utilitaria);
    a1.setRuote(4);
    a1.setPasseggeri(5);
    a1.show();

    cout << endl;

    return 0;
}