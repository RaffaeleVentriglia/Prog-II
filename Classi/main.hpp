#include <iostream>
#include <string>
using namespace std;


//ESEMPIO STUDENTE
class Studente {
    string matricola;
    string nome;
    int voto;
    public:
        void inserisci_dati(string N, string M, int v);
        void stampa_dati();
};


//ESEMPIO VEICOLO - CAMION
class Veicolo {
    int NumPasseggeri;
    int NumRuote;
    public:
        void setRuote(int n) { NumRuote = n; };
        int getRuote() { return NumRuote; };
        void setPasseggeri(int n) { NumPasseggeri = n; };
        int getPasseggeri() { return NumPasseggeri; };
};

class Camion : public Veicolo {
    int peso;
    public:
        void setPeso(int n) { peso = n; };
        int getPeso() { return peso; };
        void show();
};

enum tipo {utilitaria, suv, berlina};
class Auto : public Veicolo {
    enum tipo tipo_auto;
    public:
        void setTipo(enum tipo t) { tipo_auto = t; };
        enum tipo getTipo() { return tipo_auto; };
        void show();
};


//VIRTUAL FUNCTIONS E POLYMORPHISM
class base {
    public:
        virtual void vfunc(){
            cout << "metodo vfunc() della classe base" << endl;
        }
};

class derivata1 : public base {
    public:
        void vfunc(){
            cout << "metodo vfunc() della classe derivata1" << endl;
        }
};

class derivata2 : public base {
    public:
        void vfunc(){
            cout << "metodo vfunc() della classe derivata2" << endl;
        }
};


//PURE VIRTUAL FUNCTION
class numero {
    protected:
        int val;
    public:
        void setval(int i) { val = i; };
        virtual void show() = 0;
};

class exa : public numero {
    public:
        void show() {
            cout << "Esadecimale: " << hex << val << endl;
        }
};

class dectype : public numero {
    public:
        void show(){
            cout << "Decimale: " << val << endl;
        }
};

class ottype : public numero {
    public:
        void show(){
            cout << "Ottale: " << oct << val << endl;
        }
};