#include "main.hpp"

int main() {
    Auto a1("Panda");
    int scelta;
    float vel;
    cout << "Tipo di macchina: " << a1.getType() << endl;
    while (scelta != 0){
        if(a1.getState() == false){
            cout << "0. Esci dal programma" << endl;
            cout << "1. Accendi l'auto" << endl;
            cout << "2. Stato dell'auto" << endl;
            cout << "Scegliere l'azione da compiere: ";
            cin >> scelta;
            switch (scelta) {
                case 0:
                    break;
                case 1:
                    a1.setState(true);
                    break;
                case 2:
                    cout << "Stato: ";
                    if (a1.getState() == false){
                        cout << "Spenta" << endl;
                    } else {
                        cout << "Accesa" << endl;
                    }
                    cout << "Velocità: " << a1.getSpeed() << endl;
                    break;
                default:
                    cout << "Errore nell'inserimento dell'azione" << endl;
                    exit(1);
            }
        } else {
            cout << "1. Spegni l'auto" << endl;
            if(a1.getSpeed() == 0){
                cout << "2. Accelera" << endl;
                cout << "3. Stato dell'auto" << endl;
                cout << "Scegliere l'azione da compiere: ";
                cin >> scelta;
                switch (scelta) {
                    case 0:
                        break;
                    case 1:
                        a1.setState(false);
                        a1.azzera();
                        break;
                    case 2:
                        cout << "Di quanto si vuole accelerare: ";
                        cin >> vel;
                        a1.accelera(vel);
                        cout << "Velocità: " << a1.getSpeed() << endl;
                        break;
                    case 3:
                        cout << "Stato: ";
                        if (a1.getState() == false){
                            cout << "Spenta" << endl;
                        } else {
                            cout << "Accesa" << endl;
                        }
                        cout << "Velocità: " << a1.getSpeed() << endl;
                        break;
                    default:
                        cout << "Errore nell'inserimento dell'azione" << endl;
                        exit(1);
                }
            } else {
                cout << "2. Accelera ancora" << endl;
                cout << "3. Decelera" << endl;
                cout << "4. Stato dell'auto" << endl;
                cout << "Scegliere l'azione da compiere: ";
                cin >> scelta;
                switch (scelta) {
                    case 0:
                        break;
                    case 1:
                        a1.setState(false);
                        a1.azzera();
                        break;
                    case 2:
                        cout << "Di quanto si vuole accelerare: ";
                        cin >> vel;
                        a1.accelera(vel);
                        cout << "Velocità: " << a1.getSpeed() << endl;
                        break;
                    case 3:
                        cout << "Di quanto si vuole decelerare: ";
                        cin >> vel;
                        a1.decelera(vel);
                        cout << "Velocità: " << a1.getSpeed() << endl;
                        break;
                    case 4:
                        cout << "Stato: ";
                        if (a1.getState() == false){
                            cout << "Spenta" << endl;
                        } else {
                            cout << "Accesa" << endl;
                        }
                        cout << "Velocità: " << a1.getSpeed() << endl;
                        break;
                    default:
                        cout << "Errore nell'inserimento dell'azione" << endl;
                        exit(1);
                }
            }
        }
    }
    return 0;
}