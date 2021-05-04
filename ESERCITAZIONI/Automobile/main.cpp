#include <iostream>
#include <string>
using namespace std;
#include "main.hpp"

int main(){
    unsigned int scelta;
    unsigned int vel;
    Automobile aut("Suv");
    cout << "Tipo: " << aut.getType() << endl;
    cout << "Stato: " << aut.getState() << endl;
    cout << "Velocità: " << aut.getSpeed() << endl;

    while(scelta == 3){
        switch(scelta){
            case 1:
                cout << "Di quanto vuoi accelerare: ";
                cin >> vel;
                aut.Accelera(vel);
        }
    }
    return 0;
}