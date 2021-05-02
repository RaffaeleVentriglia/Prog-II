#include "header.h"

int main(int argc, char *argv[]){
	unsigned int choice;
	cout << "Ciao, " << argv[1] << endl;
	cout << "1) Algoritmo di Ordinamento per Inserimento" << endl;
	cout << "2) Algoritmo di Ordinamento per Selezione di Massimo" << endl;
	cout << "3) Algoritmo di Ordinamento per Selezione di Minimo" << endl;
	cout << "4) Algoritmo di Ricerca Binaria" << endl;
	cout << "Inserire il numero dell'algoritmo che si vuole utilizzare: ";
	cin >> choice;
	algoritmi(choice);
	return 0;
}
