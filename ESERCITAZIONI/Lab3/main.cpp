#include <iostream>
#include <bitset>
#define Nstud 20
using namespace std;

void function1(int, bitset<Nstud>[], int*);
void function2(int, bitset<Nstud>[]);

int main(int argc, char* argv[]){
    int Nlez = 12;
    bitset<Nstud> presenze[Nlez];
    int arr[Nstud] = {0};
    
    cout << "Presenze degli studenti (colonna) per ogni lezione (riga)" << endl;
    for(int k = 0; k < Nlez; k ++){
        cin >> presenze[k];
        cout << presenze[k] << endl;
    }
    cout << endl;

    int L = rand() % Nlez; // fissa una lezione random
	int S = rand() % Nstud; // fissa uno studente random
	cout << "studente numero: " << S+1 << " presente alla lezione numero: " << L+1 << "?" << endl;
	cout << ( (presenze[L].test(S)) ? "SI, presente" : "NO, assente" ) << endl;
    cout << endl;

    function1(Nlez, presenze, arr);
    for(int i = 0; i < Nstud; i++){
		cout << "Studente: " << i << " Presenze: " << arr[i] << endl;
	}
    cout << endl;

    function2(Nlez, presenze);
    return EXIT_SUCCESS;
}

void function1(int Nlez, bitset<Nstud> presenze[], int* arr){
    for(unsigned int i = 0; i < Nstud; i++){
		for(unsigned int j = 0; j < Nlez; j++){
			if((presenze[j].test(i))){
				arr[i]++;
			}
		}
	}
}

void function2(int Nlez, bitset<Nstud> presenze[]){
    srand(time(NULL));
    int L = rand()% Nlez;
    cout << "Studenti presenti alla lezione " << L << endl;
	for(unsigned int i = 0; i < Nstud; i++){
		if((presenze[L].test(i))){
			cout << "Studente " << i << " presente" << endl;
		}
	}
}