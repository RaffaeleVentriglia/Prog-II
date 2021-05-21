#include <iostream>
#include <string>
using namespace std;


class articoli {
    protected:
        string codiceBarre;
        string descrizione;
        float prezzo;
    public:
        virtual void setInfo(string, string, float) = 0;
        virtual void getInfo() = 0;
        virtual float sconta() = 0;
};

class alimentari : public articoli {
    protected:
        int annoScadenza;
    public:
        void setInfo(string, string, float);
        void getInfo();
        void setAnno(int);
        int getAnno();
        float sconta();
};

class nonAlimentari : public articoli {
    public:
        string materiale;
        void setInfo(string, string, float);
        void getInfo();
        void setMateriale(string);
        string getMateriale();
        float sconta();
};

void alimentari::setInfo(string codice, string descrizione, float prezzo){
    this -> codiceBarre = codice;
    this -> descrizione = descrizione;
    this -> prezzo = prezzo;
}

void alimentari::getInfo(){
    cout << "Codice a barre: " << this -> codiceBarre << endl;
    cout << "Descrizione: " << this -> descrizione << endl;
    cout << "Prezzo: €" << this -> prezzo << endl;
}

float alimentari::sconta(){
    bool carta;
    float sconto;
    cout << "Il cliente ha la carta fedeltà? " << endl;
    cout << "0) No" << endl << "1) Si" << endl;
    cin >> carta;
    if(carta){
        sconto = (5/100) * this -> prezzo;
        this -> prezzo -= sconto;
    } else {
        cout << "Nessuno sconto disponibile per la carta fedeltà" << endl;
    }
    if(this -> annoScadenza == 2021){
        sconto = (20/100) * this -> prezzo;
        this -> prezzo -= sconto;
    }
    return this -> prezzo;
}

void alimentari::setAnno(int anno){
    anno = this -> annoScadenza;
}

int alimentari::getAnno(){
    return this -> annoScadenza;
}

float nonAlimentari::sconta(){
    bool carta;
    float sconto;
    cout << "Il cliente ha la carta fedeltà? " << endl;
    cout << "0) No" << endl << "1) Si" << endl;
    cin >> carta;
    if(carta){
        sconto = (5/100) * this -> prezzo;
        this -> prezzo -= sconto;
    } else {
        cout << "Nessuno sconto disponibile per la carta fedeltà" << endl;
    }
    if(this -> materiale == "vetro" || this -> materiale == "plastica" || this -> materiale == "carta"){
        sconto = (10/100) * this -> prezzo;
        this -> prezzo -= sconto;
    }
    return this -> prezzo;
}

void nonAlimentari::setMateriale(string materiale){
    materiale = this -> materiale;
}

string nonAlimentari::getMateriale(){
    return this -> materiale;
}

void articoli::setInfo(string codiceBarre, string descrizione, float prezzo){
    this -> codiceBarre = codiceBarre;
    this -> descrizione = descrizione;
    this -> prezzo = prezzo;
}

void articoli::getInfo(){
    cout << "Codice a barre: " << this -> codiceBarre << endl;
    cout << "Descrizione: " << this -> descrizione << endl;
    cout << "Prezzo: €" << this -> prezzo << endl;
}